#include "bicyclemodel.h"
#include "QDebug"
#include "qmath.h"
bicyclemodel::bicyclemodel(int lf,int lr)
{
    bicycle1.lf = lf;
    bicycle1.lr = lr;
}

void bicyclemodel::setReardeclination(double deltaf)
{
    bicycle1.deltaf = deltaf;
}
void bicyclemodel::setFontdeclination(double deltar)
{
    bicycle1.deltar = deltar;
}
void bicyclemodel::setdeltaT(double deltaT)
{
    bicycle1.deltaT = deltaT;
}
void bicyclemodel::setSpeed(double V)
{
    bicycle1.V = V;
}



double bicyclemodel::getbeta()
{
    //qDebug() << bicycle1.deltar << bicycle1.deltaf << bicycle1.lf << bicycle1.lr;
    bicycle1.beta = (180/PI)*atan((bicycle1.lf*tan(bicycle1.deltar)+bicycle1.lr*tan(bicycle1.deltaf))/(bicycle1.lf+bicycle1.lr));//�Ƕ�
    return bicycle1.beta;
}
double bicyclemodel::getupdate()
{
    bicycle1.beta = atan((bicycle1.lf*tan(bicycle1.deltar) + bicycle1.lr*tan(bicycle1.deltaf)) / (bicycle1.lf + bicycle1.lr));//����
    //qDebug() << "beta" << bicycle1.beta;
    bicycle1.psi = bicycle1.psi + (bicycle1.V / bicycle1.lr)*sin(bicycle1.beta)*bicycle1.deltaT;//����
    bicycle1.X = bicycle1.X + bicycle1.V * cos(bicycle1.psi + bicycle1.beta)*bicycle1.deltaT;
    bicycle1.Y = bicycle1.Y + bicycle1.V * sin(bicycle1.psi + bicycle1.beta)*bicycle1.deltaT;
    return 0;
}
