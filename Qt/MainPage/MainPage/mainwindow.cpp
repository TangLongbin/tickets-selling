#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->StartButton, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(switchPage()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
    if(button == ui->StartButton){
        ui->stackedWidget->setCurrentIndex(1);//点击"开始购票"后进入系统说明页面
    }
    if(button == ui->pushButton){
        ui->stackedWidget_2->setCurrentIndex(0);//点击"用户须知"后显示用户须知
    }
    if(button == ui->pushButton_3){
        ui->stackedWidget_2->setCurrentIndex(1);//点击"购票流程"后显示购票流程
    }
    if(button == ui->pushButton_4 || button == ui->pushButton_6){
        ui->stackedWidget->setCurrentIndex(0);//点击"返回主页"后退回主页面
    }
    if(button == ui->pushButton_5 || button == ui->pushButton_12){
        ui->stackedWidget->setCurrentIndex(2);//点击"确认"或"返回"后进入起点站选择页面
    }
    if(button == ui->pushButton_2){
        ui->stackedWidget->setCurrentIndex(3);//点击"下一页"后进入终点站选择页面
    }
    if(button == ui->pushButton_11){
        ui->stackedWidget->setCurrentIndex(4);//点击"确认购票"后进入费用结算页面
    }
}
