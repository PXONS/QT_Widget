#include "history.h"
#include "ui_history.h"

history::history(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::history)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet(".QFrame{background-color: white; border: 1px solid black; border-radius: 10px;}");

}

history::~history()
{
    delete ui;
}
int xxxkon = 0;
int yyykon = 0;

void history::receiveData(int data,int data1)
{
  xxxkon = data;
  yyykon = data1;

}
void history::onDataSent(int data,int data1)

{

 history::receiveData( data, data1);
}

void  history::movee(){
    if(xxxkon ==!0 || yyykon ==!0)
    {
    qDebug()<<"Sayı gönderiliyorrrr: "<<xxxkon;
    qDebug()<<"Sayı gönderiliyorrrr : "<<yyykon;
    this->move(xxxkon,yyykon);
    }
    else (
        this->move(1800,0)
         );

}

void history::on_pushButton_3_clicked()
{
   this->hide();
}

