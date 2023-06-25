#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>

namespace Ui {
class history;
}

class history : public QWidget
{
    Q_OBJECT

public:
    explicit history(QWidget *parent = nullptr);
    ~history();
    void receiveData(int data,int data1);
    void movee();


public slots:
    void onDataSent(int data,int data1);



private slots:
    void on_pushButton_3_clicked();

private:
    Ui::history *ui;
};

#endif // HISTORY_H
