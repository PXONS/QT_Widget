#ifndef WIDGET_H
#define WIDGET_H

//extern int posxx;
//extern int posyy;

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <QObject>
#include <QDebug>
#include <QScreen>
#include <QRect>
#include <QSize>
#include <QApplication>
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <Qtsql/QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }


QT_END_NAMESPACE


class Widget : public QWidget
{
    Q_OBJECT


public slots:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void form1enabled();


//    void sendvalue(){
//        emit valuechanged();
//    }



public:
    Widget(QWidget *parent = nullptr);

    ~Widget( );

   void sendData(int dataa1, int dataa2);

    QPoint cur_pos;
    QPoint new_pos;

    QSqlDatabase db;

signals:

  void dataSent(int dataa1, int dataa2);




void valuechanged(const QString &value);


private slots:
    void on_pushButton_7_clicked( );
    void on_pushButton_9_clicked();



    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

  void on_pushButton_6_clicked();


  void on_pushButton_4_clicked();

  void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;









//int m_value1;
//int konum1;
//int konum2;
//settings snsr;
//int m_value;

};
#endif  //WIDGET_H
