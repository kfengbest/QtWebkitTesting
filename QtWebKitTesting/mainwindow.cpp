#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "exposedtojava.h"

#include <QtWebKit>
#include <QLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGridLayout *layout = new QGridLayout(ui->centralWidget);
    ui->centralWidget->setLayout(layout);

    //
    // Setup object that can be called from JavaScript - register it later
    m_exposedToJava = new ExposedToJava(ui->centralWidget);
    //exposedToJava->incrementCounter();

    //
    // Setup web view and mechanism to add C++ objects to JavaScript
    m_webView = new QWebView(ui->centralWidget);
    QWebFrame* webFrame = m_webView->page()->mainFrame();
    connect(webFrame, SIGNAL(javaScriptWindowObjectCleared()), this, SLOT(addObjectsToJavaScript()));

    m_webView->setGeometry(10, 10, 200, 200);
    m_webView->setUrl(QUrl("C:\\DailyWork\\Code Doodles\\Qt Testing\\QtWebKitTesting\\MyPage.html"));
    layout->addWidget(m_webView, 0, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addObjectsToJavaScript()
{
    QMessageBox::information(NULL, "MainWindow C++ Class", "MainWindow::addObjectsToJavaScript method");

    QWebFrame* webFrame = m_webView->page()->mainFrame();
    webFrame->addToJavaScriptWindowObject("exposedToJava", m_exposedToJava);
}
