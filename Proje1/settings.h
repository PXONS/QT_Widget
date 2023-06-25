#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <iostream>
#include <QObject>
#include <QDebug>
#include "widget.h"


namespace Ui {
class settings;
//int shareval1 ;
//int shareval2 ;
}

class settings : public QWidget
{
    Q_OBJECT

public slots:
    void onDataSent(int data,int data1);
  void on_pushButton_6_clicked();

public:

    explicit settings(QWidget *parent = nullptr);
    ~settings();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    QPoint cur_poss;
    QPoint new_poss;

    void receiveData(int data,int data1);
    void movee();










private:
    Ui::settings *ui;
    int m_value;


};

#endif // SETTINGS_H
