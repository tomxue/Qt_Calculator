#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

int num1;
int num2;
double result;
int operator1;
int operator2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton7_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 7;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 7;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton8_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 8;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 8;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton9_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 9;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 9;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton4_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 4;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 4;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton5_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 5;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 5;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton6_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 6;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 6;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton1_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 1;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 1;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton2_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 2;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 2;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton3_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 3;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 3;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton0_clicked()
{
    if(operator1 == 0){
        num1 = num1*10 + 0;
        QString str = QString::number(num1);
        ui->lineEdit->setText(str);
    }
    else{
        num2 = num2*10 + 0;
        QString str = QString::number(num2);
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_pushButton_mul_clicked()
{
    operator1 = 1;  // multiple
}

void MainWindow::on_pushButton_div_clicked()
{
    operator1 = 2;  // divide
}

void MainWindow::on_pushButton_add_clicked()
{
    operator1 = 3;  // add
}

void MainWindow::on_pushButton_min_clicked()
{
    operator1 = 4;  // minus
}

void MainWindow::on_pushButton_equ_clicked()
{
    operator2 = 1;  // equal
    switch(operator1){
    case 1:
        result = num1 * num2;
        break;
    case 2:
        result = ((double)num1 / (double)num2);
        break;
    case 3:
        result = num1 + num2;
        break;
    case 4:
        result = num1 - num2;
        break;
    default:
        result = 0;
        break;
    }

    QString str = QString::number(result, NULL, 10);
    ui->lineEdit->setText(str);

    num1 = 0;
    num2 = 0;
    operator1 = 0;
    operator2 = 0;
}

void MainWindow::on_pushButton_ac_clicked()
{
    num1 = 0;
    num2 = 0;
    operator1 = 0;
    operator2 = 0;
    ui->lineEdit->setText("0");
}
