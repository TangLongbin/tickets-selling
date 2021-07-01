/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *Stationlabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *MainPageTitle_1;
    QLabel *MainPageTitle_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *MainPageSubTitle_1;
    QLabel *MainPageSubTitle_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *StartButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *Authorlabel;
    QLabel *Versionlabel;
    QWidget *page_1;
    QLabel *Instractionlabel;
    QStackedWidget *stackedWidget_2;
    QWidget *page2;
    QTextBrowser *textBrowser_1;
    QWidget *page3;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_4;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 480);
        MainWindow->setMinimumSize(QSize(600, 480));
        MainWindow->setMaximumSize(QSize(600, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 601, 471));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        Stationlabel = new QLabel(page_0);
        Stationlabel->setObjectName(QString::fromUtf8("Stationlabel"));
        Stationlabel->setGeometry(QRect(10, 410, 101, 19));
        widget = new QWidget(page_0);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 601, 361));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        MainPageTitle_1 = new QLabel(widget);
        MainPageTitle_1->setObjectName(QString::fromUtf8("MainPageTitle_1"));
        MainPageTitle_1->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        MainPageTitle_1->setFont(font1);
        MainPageTitle_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageTitle_1);

        MainPageTitle_2 = new QLabel(widget);
        MainPageTitle_2->setObjectName(QString::fromUtf8("MainPageTitle_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        MainPageTitle_2->setFont(font2);
        MainPageTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageTitle_2);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        MainPageSubTitle_1 = new QLabel(widget);
        MainPageSubTitle_1->setObjectName(QString::fromUtf8("MainPageSubTitle_1"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        MainPageSubTitle_1->setFont(font3);
        MainPageSubTitle_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageSubTitle_1);

        MainPageSubTitle_2 = new QLabel(widget);
        MainPageSubTitle_2->setObjectName(QString::fromUtf8("MainPageSubTitle_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainPageSubTitle_2->sizePolicy().hasHeightForWidth());
        MainPageSubTitle_2->setSizePolicy(sizePolicy);
        MainPageSubTitle_2->setFont(font2);
        MainPageSubTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageSubTitle_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        StartButton = new QPushButton(widget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(36);
        StartButton->setFont(font4);

        verticalLayout_3->addWidget(StartButton);

        widget1 = new QWidget(page_0);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(490, 390, 91, 51));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Authorlabel = new QLabel(widget1);
        Authorlabel->setObjectName(QString::fromUtf8("Authorlabel"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Times New Roman"));
        font5.setPointSize(10);
        Authorlabel->setFont(font5);

        verticalLayout_2->addWidget(Authorlabel);

        Versionlabel = new QLabel(widget1);
        Versionlabel->setObjectName(QString::fromUtf8("Versionlabel"));
        Versionlabel->setFont(font5);

        verticalLayout_2->addWidget(Versionlabel);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        Instractionlabel = new QLabel(page_1);
        Instractionlabel->setObjectName(QString::fromUtf8("Instractionlabel"));
        Instractionlabel->setGeometry(QRect(200, 0, 171, 81));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font6.setPointSize(28);
        font6.setBold(true);
        font6.setWeight(75);
        Instractionlabel->setFont(font6);
        Instractionlabel->setAlignment(Qt::AlignCenter);
        stackedWidget_2 = new QStackedWidget(page_1);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(190, 90, 401, 321));
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        textBrowser_1 = new QTextBrowser(page2);
        textBrowser_1->setObjectName(QString::fromUtf8("textBrowser_1"));
        textBrowser_1->setGeometry(QRect(70, 11, 361, 261));
        stackedWidget_2->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        textBrowser_2 = new QTextBrowser(page3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(15, 0, 371, 311));
        stackedWidget_2->addWidget(page3);
        pushButton_4 = new QPushButton(page_1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 390, 171, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font7.setPointSize(20);
        pushButton_4->setFont(font7);
        widget2 = new QWidget(page_1);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 100, 171, 141));
        verticalLayout_8 = new QVBoxLayout(widget2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font8.setPointSize(24);
        pushButton->setFont(font8);

        verticalLayout_8->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font8);

        verticalLayout_8->addWidget(pushButton_3);

        stackedWidget->addWidget(page_1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\234\260\351\223\201\345\224\256\347\245\250\347\263\273\347\273\237", nullptr));
        Stationlabel->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\253\231:XXX", nullptr));
        MainPageTitle_1->setText(QApplication::translate("MainWindow", "\345\234\260\351\223\201\345\224\256\347\245\250\347\263\273\347\273\237", nullptr));
        MainPageTitle_2->setText(QApplication::translate("MainWindow", "Tickets Selling System", nullptr));
        MainPageSubTitle_1->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\350\264\255\347\245\250!", nullptr));
        MainPageSubTitle_2->setText(QApplication::translate("MainWindow", "Welcome!", nullptr));
        StartButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\264\255\347\245\250", nullptr));
        Authorlabel->setText(QApplication::translate("MainWindow", "By:TangLongbin", nullptr));
        Versionlabel->setText(QApplication::translate("MainWindow", "Version:1.0", nullptr));
        Instractionlabel->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\257\264\346\230\216", nullptr));
        textBrowser_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\347\224\250\346\210\267\351\241\273\347\237\245!</p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\350\264\255\347\245\250\346\265\201\347\250\213!</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\351\241\273\347\237\245", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\264\255\347\245\250\346\265\201\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
