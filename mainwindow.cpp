#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bicyclemodel.h"
#include "QDebug"
#include "math.h"
#include "qstring.h"
#include "QString"
#include "qpainterpath.h"
 


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{	
	this->setWindowTitle("1111");
	ui->setupUi(this);
    ui->doubleSpinBox_TIME->setValue(0.1);
    ui->doubleSpinBox_SPEED->setValue(2);
    //ui->widget->setStyleSheet("background-color:gray;");

}

MainWindow::~MainWindow()
{

    delete ui;
}


static double PSI;
static double X;
static double Y;
static double Rear;

bicyclemodel *B1=new bicyclemodel(2,2) ;//����������ǰ�����ȡ��������� ��m
///*计算数据*/
void MainWindow::run()
{
    //double r=15*(PI/180);//循环测试15°


    B1->setReardeclination(Rear);//����ǰ��ƫ�� �Ƕ�ֵ��
    B1->setFontdeclination(0);//����ǰ��ƫ�� �Ƕ�ֵ��
	B1->setSpeed(this->ui->doubleSpinBox_SPEED->value());
	B1->setdeltaT(this->ui->doubleSpinBox_TIME->value());
	
    B1->getupdate();

    qDebug()<<"spinBox1"<<this->ui->spinBox1->value();
    qDebug() << "deltaR" <<B1->getReardeclination();
	

		PSI = B1->getPSI() * 180 / PI;
        int i = PSI;
        int psi = i%360;
        X=B1->getX();
        Y=B1->getY();
		qDebug() << "x" << X << "Y" << Y << "PSI" << psi << "beta" << B1->getbeta();
		/*..........................lcd显示.....................................*/
        this->ui->lcdNumber_PSI->display(psi);
        this->ui->lcdNumber_X->display(X);
        this->ui->lcdNumber_Y->display(Y);
		this->ui->lcdNumber_BETA->display(B1->getbeta2());
		/*............................打印.........................*/
		print();
		


}
///*打印*/
void MainWindow::print() 
{
	QString str = QString("%1,%2").arg(B1->getX()).arg(B1->getY());
	this->ui->textEdit->textCursor().insertText(str);
	ui->textEdit->textCursor().insertText("\r\n");
	QTextCursor cursor = ui->textEdit->textCursor();
	cursor.movePosition(QTextCursor::End);            //移动到textEdit的最后一个光标处
	ui->textEdit->setTextCursor(cursor);
	if (ui->textEdit->document()->blockCount() > 20000) {
		ui->textEdit->clear();
	}
}
///*绘制*/
void MainWindow::draw()
{
	
}
///*滑块槽*/
void MainWindow::on_horizontalSlider_valueChanged(int value)
{

    double r = (PI/180)*(this->ui->horizontalSlider->value());
    Rear = r;
    this->ui->spinBox1->setValue(value);
    this->ui->horizontalSlider->setValue(value);
	while ((value!=30)&(value != -30)&(value != 15)&(value != -15))
		{
			run();
		
			break;
		}
    /*this->ui->lcdNumber_PSI->display(PSI);
    this->ui->lcdNumber_X->display(X);
    this->ui->lcdNumber_Y->display(Y);*/
}
///*pushbutton槽*/
void MainWindow::on_pushButton_clicked()
{
    this->ui->spinBox1->setValue(15);
    Rear = (PI / 180) * 15;
    run();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->spinBox1->setValue(-15);
    Rear = (PI / 180)*(-15);
    run();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->ui->spinBox1->setValue(-30);
    Rear = (PI / 180)*(-30);
    run();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->ui->spinBox1->setValue(30);
    Rear = (PI / 180) * 30;
    run();
}
///*spinbox槽*/
void MainWindow::on_spinBox1_valueChanged(int arg1)
{
    this->ui->horizontalSlider->setValue(arg1);
    this->ui->spinBox1->setValue(arg1);
   // run();
    /*this->ui->lcdNumber_PSI->display(PSI);
    this->ui->lcdNumber_X->display(X);
    this->ui->lcdNumber_Y->display(Y);*/
}

///*重置按钮槽*/
void MainWindow::on_pushButton_RESTAR_clicked()
{

	draw();
    B1->restar();
	ui->textEdit->clear();
	print();
	this->ui->doubleSpinBox_TIME->setValue(0.1);
	this->ui->doubleSpinBox_SPEED->setValue(2);
	this->ui->lcdNumber_PSI->display(0);
	this->ui->lcdNumber_X->display(0);
	this->ui->lcdNumber_Y->display(0);
	this->ui->lcdNumber_BETA->display(B1->getbeta2());
}


//测试
void MainWindow::test() {
	for (int i = 0; i < 200; i++)
	{
		B1->setReardeclination(15 * (PI / 180));
		run();
	}
};




