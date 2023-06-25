#include "settings.h"
#include "ui_settings.h"
#include <QRect>
#include <QScreen>
#include <iostream>
#include "widget.h"
#include <QString>
#include <QPoint>



settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet(".QFrame{background-color: white; border: 1px solid black; border-radius: 10px;}");
     Widget *settt = new Widget;



    QObject::connect(ui->pushButton_6,&QPushButton::clicked,settt,&Widget::form1enabled);


    //movee();
    //this->move();


//      Widget wid;

//     this->move(m_value,wid.cur_pos.y());
//     qDebug()<< m_value;

      //this->move(xxx,yyy);



    //Widget *sett = new Widget;
   //QPoint pos = sett-> pos();
//   this->move(QApplication::primaryScreen()->geometry().right()- this->rect(pos.x(),pos.y(),175,90),
//             QApplication::primaryScreen()->geometry().top()- this->rect().top());

//   qDebug()<< posxx;
//   qDebug()<< posyy;
  // this->setGeometry(xx,yy,175,90);
  // this->move(dene1,dene2);
//   QLabel *lineEdit = new QLabel;
//   lineEdit->setText(QString::number(pos.x(),pos.y()));
   //qDebug()<< pos.x();
   //qDebug()<< pos.y();
}


int xkon = 0;
int ykon = 0;

settings::~settings()
{
    delete ui;
}

void settings::on_pushButton_6_clicked()
{




           //settt->setEnabled(true);
//    settt->move(xkon,ykon);
//    qDebug()<<"bu konumda başaltıldı"<<xkon;
//     qDebug()<<"bu konumda başaltıldı"<<ykon;

     //settt->setVisible(true);
   this->hide();


}





void settings::mousePressEvent(QMouseEvent *event)///////////////////////////////////////////////
{

    cur_poss = event->globalPosition().toPoint();
    }





  void settings::mouseMoveEvent(QMouseEvent *event)//////////////////////////////////////////////

{
    new_poss = (event->globalPosition().toPoint() - cur_poss);
    move(x()+new_poss.x(),y()+new_poss.y());
    cur_poss = event->globalPosition().toPoint();




  }

  void settings::receiveData(int data,int data1)
  {
    xkon = data;
    ykon = data1;

  }
  void settings::onDataSent(int data,int data1)

  {

   settings::receiveData( data, data1);
  }

  void settings::movee(){
      if(xkon ==!0 || ykon ==!0)
      {
      qDebug()<<"Sayı gönderiliyorrrr: "<<xkon;
      qDebug()<<"Sayı gönderiliyorrrr : "<<ykon;
      this->move(xkon,ykon);
      }
      else (
          this->move(1800,0)
           );

  }

