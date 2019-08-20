#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define PI 3.14
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void run();
	void draw();
	void print();
	void test();

private slots:
    void on_horizontalSlider_valueChanged(int value);


    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_spinBox1_valueChanged(int arg1);

    void on_pushButton_RESTAR_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
