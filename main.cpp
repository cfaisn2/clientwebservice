#include <iostream>
#include <QtWidgets/QApplication>
#include "ClientRest.h"


int main(int argc, char *argv[])
{



    QApplication app(argc, argv);
    QUrl url("http://apilayer.net/api/live?access_key=25b92b75b9509dbbfbba17525b2a80c8&currencies=EUR&source=USD&format=1");
    ClientRest cr(url);
    cr.sendrequest();
    return app.exec();
}