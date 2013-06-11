#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            delete labelNumber[i+j];
        }
    }
}



void MainWindow::on_toolButton_clicked()
{

    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            labelNumber[i+j] = new QLabel("2");
            ui->gridLayout->addWidget(labelNumber[i+j],i,j,0);
        }
    }
}

