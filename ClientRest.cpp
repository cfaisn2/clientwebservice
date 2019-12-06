//
// Created by ericthomas on 06/12/2019.
//

#include <QtCore/QUrl>

#include "ClientRest.h"


ClientRest::ClientRest(QUrl url) {
    request.setUrl(url);
    QObject::connect(&networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(handleJson()));



}

void ClientRest::handleJson() {
    if (currentReply->error() != QNetworkReply::NoError)
    {
        qDebug()<<currentReply->error();
    }
     else{
        QString data = (QString) currentReply->readAll();
        qDebug()<<data;
     }

   }

void ClientRest::sendrequest() {
    currentReply=networkManager.get(request);
}


