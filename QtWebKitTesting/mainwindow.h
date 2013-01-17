#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit>

#include "exposedtojava.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void addObjectsToJavaScript();

private:
    Ui::MainWindow *ui;

    QWebView *m_webView;
    ExposedToJava *m_exposedToJava;
};

#endif // MAINWINDOW_H
