#include "QObject"
#include "math.h"

#define PI 3.14

#ifndef BICYCLEMODEL_H
#define BICYCLEMODEL_H



class bicyclemodel : public QObject
{
    Q_OBJECT
        struct bicycle
{
    double deltaf;//ǰ��ƫ��
    double deltar;//����ƫ��
    double V;//�ٶ� m/s
    double beta;//���ƽ�
    double lf ;//ǰ������
    double lr ;//��������
    double deltaT;//����ʱ�� s

    /*������ʼ״̬*/
    double psi=0;//�����Ǧ�
    double X = 0;//��ʼY
    double Y = 0;//��ʼX
}bicycle1;

    //bicycle bicycle1;


public:

    bicyclemodel(int lf, int lr);
    double getReardeclination(){
        return bicycle1.deltaf;
    }
    double getFrontdeclination(){
        return bicycle1.deltar;
    }
    double getSpeed(){
        return bicycle1.V;
    }//��ȡ�ٶ�
    double getbeta(); //��ȡ���ƽ�
	double getbeta2() {
		return bicycle1.beta;
	}
    double getupdate();//���º����ǡ�X��Y�ĸ���ֵ
    double getPSI()
    {
        return bicycle1.psi;
    }
    double getX()
    {
        return bicycle1.X;
    }
    double getY()
    {
        return bicycle1.Y;
    }

public:
    void restar(){
        bicycle1.X=0;
        bicycle1.Y=0;
		bicycle1.psi = 0;
    }//重置
    void setReardeclination(double deltaf);
    void setFontdeclination(double deltar);
    void setdeltaT(double deltaT);
    void setSpeed(double V);
};

#endif // BICYCLEMODEL_H
