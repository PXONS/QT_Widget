#include "widget.h"
#include "settings.h"
#include "infos.h"
#include "history.h"
#include <QApplication>
#include <QScreen>
#include <QSize>
#include <QPushButton>
#include <QDialog>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget widgettt;

    settings se;
    infos inf;
    history his;
    QScreen* screen = QGuiApplication::primaryScreen();
    QSize resolution = screen->size();
    int width = resolution.width();
    int height = resolution.height();
   qDebug()<<width;
   qDebug()<<height;


     QObject::connect(&widgettt, &Widget::dataSent, &se, &settings::onDataSent);

     QObject::connect(&widgettt, &Widget::dataSent, &inf, &infos::onDataSent);

     QObject::connect(&widgettt, &Widget::dataSent, &his, &history::onDataSent);






   widgettt.show();
   return a.exec();

   //QObject::connect(&widgettt,&Widget::valuechanged, &se, &settings::receiveValue);
}
