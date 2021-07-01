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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());//得到按下的按钮的指针
    if(button == ui->StartButton){
        ui->stackedWidget->setCurrentIndex(1);
    }
    if(button == ui->pushButton){
        ui->stackedWidget_2->setCurrentIndex(0);
    }
    if(button == ui->pushButton_3){
        ui->stackedWidget_2->setCurrentIndex(1);
    }
    if(button == ui->pushButton_4){
        ui->stackedWidget->setCurrentIndex(0);
    }
}
