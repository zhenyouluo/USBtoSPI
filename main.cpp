#include <QtGui/QApplication>
#include "usb2spiwindow.h"
#include <windows.h>
#include <QLabel>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    USB2SPIWindow win;
    win.show();

    //qDebug()<<GY7502_USBSPI_Open();

    return app.exec();
}
