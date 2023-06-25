#include "widget.h"
#include "./ui_widget.h"
#include <QScreen>
#include <QRect>
#include <QSize>
#include <QApplication>
#include <QWidget>
#include <iostream>
#include <QLabel>
#include <QDialog>
#include <QInputDialog>
#include <QFileDialog>
#include <QObject>
#include "settings.h"
#include "infos.h"
#include "history.h"


Widget::Widget(QWidget *parent):
     QWidget(parent),
     ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet(".QFrame{background-color: red; border: 1px solid black; border-radius: 10px;}");

       db = QSqlDatabase::addDatabase("DENEME");
       db.setHostName("10.100.100.95");
       db.setDatabaseName("TEST_SYS2");
       db.setUserName("system");
       db.setPassword("oracle");
       db.setPort(1521);



    //this->move(1827,75);
     //this->move(mapToGlobal(rect().center() - QPoint(width() + (-1190), height()+(-48))));
      this->move(QApplication::primaryScreen()->geometry().right()- this->rect().right(),
             QApplication::primaryScreen()->geometry().top()- this->rect().top());
     //QPoint pos = this-> pos();

    ui->pushButton_9->setVisible(false);
   // connect(this,SIGNAL(push_button5.clicked()),[=](){snsr->});
   // settings se;

  // connect(this,&Widget::valuechanged, &se, &settings::receiveValue);

}



Widget::~Widget()
{
    delete ui;



}




int ch=1;
int dor = 1;
//int posx;
//int posy;
//extern int posxx;
//extern int posyy;




 void Widget::on_pushButton_7_clicked()////////////////////////////////////////////////////
{
     if( 1 == ch)
    {
        ch = 0;
         dor = ch;

        connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(QMouseEvent));
      qDebug()<< ch;
      ui->pushButton_7->setIcon(QIcon("C:/Users/omerg/OneDrive/Masaüstü/C++/office-push-pin2.png"));
      ui->pushButton_7->setIconSize(QSize(30,20));
    }
    else if (ch == 0)
    {
     ch = 1 ;
     dor = ch;

     connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(QMouseEvent));
      qDebug()<< ch;
      ui->pushButton_7->setIcon(QIcon("C:/Users/omerg/OneDrive/Masaüstü/C++/office-push-pin.png"));
      ui->pushButton_7->setIconSize(QSize(30,14));


    }


     //ui->label1->setText("CLICKED");


}

 void Widget::mousePressEvent(QMouseEvent *event)///////////////////////////////////////////////
 {
     if(  dor == 1 ){
     cur_pos = event->globalPosition().toPoint();
     }

    qDebug()<< cur_pos;


 }
int xgonder = 0;
int xgonder1 = 0;
   void Widget::mouseMoveEvent(QMouseEvent *event)//////////////////////////////////////////////


 {  if( dor == 1 ){
     new_pos = (event->globalPosition().toPoint() - cur_pos);
     move(x()+new_pos.x(),y()+new_pos.y());
     cur_pos = event->globalPosition().toPoint();

//     m_value = cur_pos.x();
//      emit valueChanged(m_value);
      xgonder = cur_pos.x();
      xgonder1 = cur_pos.y();

   Widget::sendData(xgonder,xgonder1);




     }

     // QObject::connect(&wi,&Widget::valuechanged, &se, &settings::receiveValue);

 }
   void Widget::sendData(int data1,int data2)
   {

       qDebug() << "Sayı gönderiliyor : " << data1;
       qDebug() << "Sayı gönderiliyor : " << data2;
        emit dataSent(data1,data2);
   }




void Widget::on_pushButton_9_clicked()
{
ui->pushButton_9->setVisible(false);
ui->pushButton_8->setVisible(true);
}


void Widget::on_pushButton_6_clicked()
{
    ui->lineEdit->clear();
    qDebug()<< "click bt6";
}


void Widget::on_pushButton_8_clicked()
{
    ui->pushButton_8->setVisible(false);
    ui->pushButton_9->setVisible(true);
}


void Widget::on_pushButton_5_clicked()

{
  settings *set = new settings;
  set->show();
  if(xgonder == 0 || xgonder1 == 0)
  {
      set->move(1750,0);

  }
  else{

      set->move(xgonder,xgonder1);

      qDebug()<< " burda açıldı"<< xgonder;
      qDebug()<< " burda açıldı"<< xgonder1;
  }


   Widget::hide();

  // this->setDisabled(1);
  //this->setVisible(false);
   //connect(ui->pushButton,SIGNAL(cliked()),set->deger);
}

void Widget::form1enabled()

{
        Widget::move(xgonder,xgonder1);
        Widget::show();

}




void Widget::on_pushButton_4_clicked()
{
    infos *inf = new infos;
    inf->show();
    if(xgonder == 0 || xgonder1 == 0)
    {
        inf->move(1750,0);

    }
    else{

        inf->move(xgonder,xgonder1);

        qDebug()<< " burda açıldı"<< xgonder;
        qDebug()<< " burda açıldı"<< xgonder1;
}

}

void Widget::on_pushButton_3_clicked()
{
    history *his = new history;
    his->show();
    if(xgonder == 0 || xgonder1 == 0)
    {
        his->move(1750,0);

    }
    else{

        his->move(xgonder,xgonder1);

        qDebug()<< " burda açıldı"<< xgonder;
        qDebug()<< " burda açıldı"<< xgonder1;
}
}
