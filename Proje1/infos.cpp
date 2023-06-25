#include "infos.h"
#include "ui_infos.h"

infos::infos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::infos)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet(".QFrame{background-color: white; border: 1px solid black; border-radius: 10px;}");
}

infos::~infos()
{
    delete ui;
}
int xxkon = 0;
int yykon = 0;

void infos::receiveData(int data,int data1)
{
  xxkon = data;
  yykon = data1;

}
void infos::onDataSent(int data,int data1)

{

 infos::receiveData( data, data1);
}

void infos::movee(){
    if(xxkon ==!0 || yykon ==!0)
    {
    qDebug()<<"Sayı gönderiliyorrrr: "<<xxkon;
    qDebug()<<"Sayı gönderiliyorrrr : "<<yykon;
    this->move(xxkon,yykon);
    }
    else (
        this->move(1800,0)
         );

}

void infos::on_pushButton_clicked()
{
    this->hide();
}

