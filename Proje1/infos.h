#ifndef INFOS_H
#define INFOS_H

#include <QWidget>

namespace Ui {
class infos;
}

class infos : public QWidget
{
    Q_OBJECT

public:
    explicit infos(QWidget *parent = nullptr);
    ~infos();
    void receiveData(int data,int data1);
    void movee();


public slots:
    void onDataSent(int data,int data1);

private slots:
    void on_pushButton_clicked();

private:
    Ui::infos *ui;
};

#endif // INFOS_H
