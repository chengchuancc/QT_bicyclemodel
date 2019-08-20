#include "mainwindow.h"
#include <QApplication>
#include "bicyclemodel.h"
#include "stdio.h"


int main(int argc, char *argv[])
{




    QApplication a(argc, argv);
    MainWindow m;
    m.show();



    return a.exec();

}
