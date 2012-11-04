#ifndef FSSERIAL_H
#define FSSERIAL_H

#include <QObject>
#include "qextserialport.h"
#include "qextserialenumerator.h"

//#include "staticHeaders.h"

class FSSerial : public QObject
{

Q_OBJECT
public:

    FSSerial();
    QString *serialPortPath;
    bool connectToSerialPort();
    void writeChar(char c);

private slots:
    void onReadyRead();
    void onDsrChanged(bool);

private:
    QextSerialPort *serialPort;

};

#endif // FSSERIAL_H