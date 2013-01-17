#include "exposedtojava.h"
#include <QMessageBox>

ExposedToJava::ExposedToJava(QObject *parent) :
    QObject(parent)
{
    m_counter = 0;
}

int ExposedToJava::incrementCounter()
{
    QMessageBox::information(NULL, "ExposedToJava C++ Class", "ExposedToJava::incrementCounter method");
    return ++m_counter;
}
