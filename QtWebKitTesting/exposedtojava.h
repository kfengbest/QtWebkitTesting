#ifndef EXPOSEDTOJAVA_H
#define EXPOSEDTOJAVA_H

#include <QObject>

class ExposedToJava : public QObject
{
    Q_OBJECT
public:
    explicit ExposedToJava(QObject *parent = 0);
    Q_INVOKABLE int incrementCounter();
    
signals:
    
public slots:

private:
    int m_counter;
};

#endif // EXPOSEDTOJAVA_H
