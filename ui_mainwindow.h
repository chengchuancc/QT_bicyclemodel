/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSpinBox *spinBox1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLCDNumber *lcdNumber_X;
    QLabel *label_2;
    QLCDNumber *lcdNumber_Y;
    QLabel *label;
    QLCDNumber *lcdNumber_PSI;
    QLabel *label_5;
    QLCDNumber *lcdNumber_BETA;
    QPushButton *pushButton_RESTAR;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_9;
    QTextEdit *textEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *doubleSpinBox_SPEED;
    QDoubleSpinBox *doubleSpinBox_TIME;
    QTextBrowser *textBrowser;
    QLabel *widget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(563, 575);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 70, 322, 75));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(-45);
        horizontalSlider->setMaximum(45);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox1 = new QSpinBox(layoutWidget);
        spinBox1->setObjectName(QStringLiteral("spinBox1"));
        spinBox1->setMinimum(-45);
        spinBox1->setMaximum(45);

        horizontalLayout->addWidget(spinBox1);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 150, 426, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lcdNumber_X = new QLCDNumber(layoutWidget1);
        lcdNumber_X->setObjectName(QStringLiteral("lcdNumber_X"));

        horizontalLayout_3->addWidget(lcdNumber_X);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lcdNumber_Y = new QLCDNumber(layoutWidget1);
        lcdNumber_Y->setObjectName(QStringLiteral("lcdNumber_Y"));

        horizontalLayout_3->addWidget(lcdNumber_Y);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lcdNumber_PSI = new QLCDNumber(layoutWidget1);
        lcdNumber_PSI->setObjectName(QStringLiteral("lcdNumber_PSI"));

        horizontalLayout_3->addWidget(lcdNumber_PSI);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lcdNumber_BETA = new QLCDNumber(layoutWidget1);
        lcdNumber_BETA->setObjectName(QStringLiteral("lcdNumber_BETA"));

        horizontalLayout_3->addWidget(lcdNumber_BETA);

        pushButton_RESTAR = new QPushButton(centralWidget);
        pushButton_RESTAR->setObjectName(QStringLiteral("pushButton_RESTAR"));
        pushButton_RESTAR->setGeometry(QRect(450, 100, 75, 23));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 190, 91, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 120, 51, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 80, 54, 12));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 210, 141, 251));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 20, 211, 44));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        doubleSpinBox_SPEED = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_SPEED->setObjectName(QStringLiteral("doubleSpinBox_SPEED"));

        horizontalLayout_4->addWidget(doubleSpinBox_SPEED);

        doubleSpinBox_TIME = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_TIME->setObjectName(QStringLiteral("doubleSpinBox_TIME"));

        horizontalLayout_4->addWidget(doubleSpinBox_TIME);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 480, 501, 61));
        widget = new QLabel(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 210, 331, 251));
        widget->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/Images/logo.png);\n"
"image: url(:/new/prefix1/Images/logo.png);\n"
"border-image: url(:/new/prefix1/Images/logo.png);\n"
"background-image: url(:/new/prefix1/Images/logo.png);\n"
"background-color: rgb(85, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "-30\302\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "-15\302\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "15\302\260", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "30\302\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\210\252\345\220\221\350\247\222PSI", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\350\247\222BETA", Q_NULLPTR));
        pushButton_RESTAR->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\350\275\250\350\277\271\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\211\215\350\275\256\345\201\217\350\247\222", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\237\345\256\232\344\275\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224\346\227\266\351\227\264", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\264\346\230\216\357\274\232\346\234\254\347\250\213\345\272\217\344\270\272\346\250\241\346\213\237\350\275\246\350\276\206\347\232\204\350\277\220\350\241\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\257\217\346\233\264\346\226\260\344\270\200\346\254\241\345\201\217\350\210\252\350\247\222\357\274\214\350\275\246\350\276\206\347\247\273\345\212\250\344\270\200\346\254\241\357\274\214\347\247\273\345\212\250\345\220\216\347\232\204\345\235\220\346\240\207\346\233\264"
                        "\346\226\260\345\234\250\350\276\223\345\207\272\346\241\206\351\207\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\275\246\350\276\206\345\211\215\346\202\254\351\225\277\345\272\246\345\222\214\345\220\216\346\202\254\351\225\277\345\272\246\345\235\207\344\270\2722M</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\220\216\350\275\256\345\201\217\350\247\222\344\270\2720\302\260</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\202\350"
                        "\200\203\351\223\276\346\216\245\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://blog.csdn.net/u013914471/article/details/82968608\"><span style=\" text-decoration: underline; color:#0000ff;\">https://blog.csdn.net/u013914471/article/details/82968608</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://blog.csdn.net/AdamShan/article/details/78696874\"><span style=\" text-decoration: underline; color:#0000ff;\">https://blog.csdn.net/AdamShan/article/details/78696874</span></a></p></body></html>", Q_NULLPTR));
        widget->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
