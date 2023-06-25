#ifndef DENEME_H
#define DENEME_H
#include <QWidget>
#include <iostream>

namespace Ui {
class veri;
}
class veri : public QWidget{
    Q_OBJECT

private:

    int verii;

public:
    explicit veri(QWidget *parent = 0);
        ~veri();

    void vgonder(int v)
    {
        verii = v;
    }

   int val()
   {
   return verii;
   }

signals:

};
#endif // DENEME_H
