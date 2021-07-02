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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *MainPageTitle_1;
    QLabel *MainPageTitle_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *MainPageSubTitle_1;
    QLabel *MainPageSubTitle_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *StartButton;
    QPushButton *StartButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *Authorlabel;
    QLabel *Versionlabel;
    QWidget *page_1;
    QLabel *Instractionlabel;
    QStackedWidget *stackedWidget_2;
    QWidget *page2;
    QTextBrowser *textBrowser_3;
    QWidget *page3;
    QTextBrowser *textBrowser_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_4;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QWidget *page_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_16;
    QWidget *tab_17;
    QWidget *tab_18;
    QWidget *tab_19;
    QWidget *tab_20;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_22;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_24;
    QLabel *label_25;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_26;
    QSpinBox *spinBox_4;
    QSpacerItem *verticalSpacer_15;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *page;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_29;
    QLabel *label_30;

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
        stackedWidget->setGeometry(QRect(0, 0, 601, 481));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        stackedWidget->setFont(font1);
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        Stationlabel = new QLabel(page_0);
        Stationlabel->setObjectName(QString::fromUtf8("Stationlabel"));
        Stationlabel->setGeometry(QRect(20, 430, 101, 19));
        layoutWidget = new QWidget(page_0);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 601, 381));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 0, 5, 0);
        MainPageTitle_1 = new QLabel(layoutWidget);
        MainPageTitle_1->setObjectName(QString::fromUtf8("MainPageTitle_1"));
        MainPageTitle_1->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        MainPageTitle_1->setFont(font2);
        MainPageTitle_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageTitle_1);

        MainPageTitle_2 = new QLabel(layoutWidget);
        MainPageTitle_2->setObjectName(QString::fromUtf8("MainPageTitle_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        MainPageTitle_2->setFont(font3);
        MainPageTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageTitle_2);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        MainPageSubTitle_1 = new QLabel(layoutWidget);
        MainPageSubTitle_1->setObjectName(QString::fromUtf8("MainPageSubTitle_1"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        MainPageSubTitle_1->setFont(font4);
        MainPageSubTitle_1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageSubTitle_1);

        MainPageSubTitle_2 = new QLabel(layoutWidget);
        MainPageSubTitle_2->setObjectName(QString::fromUtf8("MainPageSubTitle_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainPageSubTitle_2->sizePolicy().hasHeightForWidth());
        MainPageSubTitle_2->setSizePolicy(sizePolicy);
        MainPageSubTitle_2->setFont(font3);
        MainPageSubTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(MainPageSubTitle_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        StartButton = new QPushButton(layoutWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setFont(font2);

        verticalLayout_3->addWidget(StartButton);

        StartButton_2 = new QPushButton(layoutWidget);
        StartButton_2->setObjectName(QString::fromUtf8("StartButton_2"));
        StartButton_2->setFont(font2);

        verticalLayout_3->addWidget(StartButton_2);

        layoutWidget1 = new QWidget(page_0);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(490, 410, 97, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Authorlabel = new QLabel(layoutWidget1);
        Authorlabel->setObjectName(QString::fromUtf8("Authorlabel"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Times New Roman"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setWeight(75);
        Authorlabel->setFont(font5);

        verticalLayout_2->addWidget(Authorlabel);

        Versionlabel = new QLabel(layoutWidget1);
        Versionlabel->setObjectName(QString::fromUtf8("Versionlabel"));
        Versionlabel->setFont(font5);

        verticalLayout_2->addWidget(Versionlabel);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        Instractionlabel = new QLabel(page_1);
        Instractionlabel->setObjectName(QString::fromUtf8("Instractionlabel"));
        Instractionlabel->setGeometry(QRect(200, 0, 171, 71));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font6.setPointSize(28);
        font6.setBold(true);
        font6.setUnderline(false);
        font6.setWeight(75);
        Instractionlabel->setFont(font6);
        Instractionlabel->setAlignment(Qt::AlignCenter);
        stackedWidget_2 = new QStackedWidget(page_1);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(200, 100, 401, 371));
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        textBrowser_3 = new QTextBrowser(page2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 391, 351));
        stackedWidget_2->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        textBrowser_2 = new QTextBrowser(page3);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 391, 351));
        stackedWidget_2->addWidget(page3);
        widget = new QWidget(page_1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 80, 171, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font7.setPointSize(24);
        font7.setBold(true);
        font7.setUnderline(false);
        font7.setWeight(75);
        pushButton->setFont(font7);

        verticalLayout_8->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font7);

        verticalLayout_8->addWidget(pushButton_3);


        verticalLayout->addLayout(verticalLayout_8);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setUnderline(false);
        font8.setWeight(75);
        pushButton_5->setFont(font8);

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font8);

        verticalLayout->addWidget(pushButton_4);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tabWidget = new QTabWidget(page_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 100, 481, 381));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font9.setPointSize(17);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setUnderline(false);
        font9.setWeight(75);
        font9.setStrikeOut(false);
        font9.setKerning(true);
        font9.setStyleStrategy(QFont::PreferDefault);
        tabWidget->setFont(font9);
        tabWidget->setMouseTracking(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        widget1 = new QWidget(page_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(140, 10, 311, 67));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        widget2 = new QWidget(page_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(480, 130, 121, 341));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 0, 5, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_5);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_7);

        spinBox = new QSpinBox(widget2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        spinBox->setProperty("showGroupSeparator", QVariant(false));
        spinBox->setMinimum(1);
        spinBox->setMaximum(9999);
        spinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        verticalLayout_5->addWidget(spinBox);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font4);

        verticalLayout_5->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(widget2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font4);

        verticalLayout_5->addWidget(pushButton_6);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        tabWidget_2 = new QTabWidget(page_3);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 100, 481, 381));
        tabWidget_2->setFont(font9);
        tabWidget_2->setMouseTracking(false);
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tabWidget_2->setIconSize(QSize(16, 16));
        tabWidget_2->setElideMode(Qt::ElideNone);
        tabWidget_2->setUsesScrollButtons(true);
        tabWidget_2->setDocumentMode(false);
        tabWidget_2->setTabsClosable(false);
        tabWidget_2->setMovable(false);
        tabWidget_2->setTabBarAutoHide(false);
        tab_16 = new QWidget();
        tab_16->setObjectName(QString::fromUtf8("tab_16"));
        tabWidget_2->addTab(tab_16, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QString::fromUtf8("tab_17"));
        tabWidget_2->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QString::fromUtf8("tab_18"));
        tabWidget_2->addTab(tab_18, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QString::fromUtf8("tab_19"));
        tabWidget_2->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QString::fromUtf8("tab_20"));
        tabWidget_2->addTab(tab_20, QString());
        layoutWidget_2 = new QWidget(page_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(480, 130, 121, 341));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 0, 5, 0);
        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font4);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_22);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font4);
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_23);

        verticalSpacer_13 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_13);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font4);
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_24);

        label_25 = new QLabel(layoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font4);
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_25);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_14);

        label_26 = new QLabel(layoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font4);
        label_26->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_26);

        spinBox_4 = new QSpinBox(layoutWidget_2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setAlignment(Qt::AlignCenter);
        spinBox_4->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        spinBox_4->setProperty("showGroupSeparator", QVariant(false));
        spinBox_4->setMinimum(1);
        spinBox_4->setMaximum(9999);
        spinBox_4->setStepType(QAbstractSpinBox::DefaultStepType);

        verticalLayout_11->addWidget(spinBox_4);

        verticalSpacer_15 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_15);

        pushButton_11 = new QPushButton(layoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setFont(font4);

        verticalLayout_11->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setFont(font4);

        verticalLayout_11->addWidget(pushButton_12);

        layoutWidget_3 = new QWidget(page_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(140, 10, 311, 67));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font6);
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_27);

        label_28 = new QLabel(layoutWidget_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font3);
        label_28->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_28);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        widget3 = new QWidget(page);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(200, 90, 171, 81));
        verticalLayout_13 = new QVBoxLayout(widget3);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(widget3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font6);
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_29);

        label_30 = new QLabel(widget3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Times New Roman"));
        font10.setPointSize(20);
        font10.setBold(false);
        font10.setUnderline(false);
        font10.setWeight(50);
        label_30->setFont(font10);
        label_30->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_30);

        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(StartButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(3);


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
        StartButton_2->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        Authorlabel->setText(QApplication::translate("MainWindow", "By:TangLongbin", nullptr));
        Versionlabel->setText(QApplication::translate("MainWindow", "Version:1.0", nullptr));
        Instractionlabel->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\257\264\346\230\216", nullptr));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223','\345\256\213\344\275\223'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-weight:400;\">\350\277\231\346\230\257\347\224\250\346\210\267\351\241\273\347\237\245!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-weight:400;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223','\345\256\213\344\275\223'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-weight:400;\">\350\277\231\346\230\257\350\264\255\347\245\250\346\265\201\347\250\213!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-weight:400;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\351\241\273\347\237\245", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\264\255\347\245\250\346\265\201\347\250\213", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\200\345\217\267\347\272\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\344\272\214\345\217\267\347\272\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\344\270\211\345\217\267\347\272\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\233\233\345\217\267\347\272\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\344\272\224\345\217\267\347\272\277", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\350\265\267\347\202\271\347\253\231", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Please choose the start station", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271\347\253\231", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "XXX", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "XXX", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\347\245\250\346\225\260", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_16), QApplication::translate("MainWindow", "\344\270\200\345\217\267\347\272\277", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_17), QApplication::translate("MainWindow", "\344\272\214\345\217\267\347\272\277", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_18), QApplication::translate("MainWindow", "\344\270\211\345\217\267\347\272\277", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_19), QApplication::translate("MainWindow", "\345\233\233\345\217\267\347\272\277", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_20), QApplication::translate("MainWindow", "\344\272\224\345\217\267\347\272\277", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271\347\253\231", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "XXX", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "XXX", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\347\245\250\346\225\260", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\350\264\255\347\245\250", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\347\273\210\347\202\271\347\253\231", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Please choose the Terminal", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\350\264\271\347\224\250\347\273\223\347\256\227", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Fare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
