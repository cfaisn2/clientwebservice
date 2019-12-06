//
// Created by ericthomas on 06/12/2019.
//

#ifndef QTCLIENTWEBSERVICE_CLIENTREST_H
#define QTCLIENTWEBSERVICE_CLIENTREST_H


#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QMainWindow>

class ClientRest:public QWidget {
Q_OBJECT
    QNetworkAccessManager networkManager;
    QNetworkRequest request;
    QNetworkReply* currentReply;

public:
    ClientRest(QUrl url);
    void sendrequest();

public slots:
    void handleJson();





};


#endif //QTCLIENTWEBSERVICE_CLIENTREST_H
