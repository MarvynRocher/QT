#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_checkBoxWindows_clicked()
{

}

void MainWindow::on_pushButtonQuitter_clicked()
{

}

void MainWindow::on_radioButtonWindows_clicked()
{
    ui->textEdit->append("Radio Windows");
}

void MainWindow::on_radioButtonOSXLion_clicked()
{
    ui->textEdit->append("Radio Os X Lion");
}

void MainWindow::on_radioButtonLinux_clicked()
{
    ui->textEdit->append("Radio Linux");
}

void MainWindow::on_pushButtonLinux_clicked()
{
    ui->textEdit->append("Bouton Linux");
}

void MainWindow::on_pushButtonWindows_clicked()
{
    ui->textEdit->append("Bouton Windows");
}

void MainWindow::on_pushButtonOSXLion_clicked()
{
    ui->textEdit->append("Bouton OS X Lion");
}

void MainWindow::on_checkBoxWindows_stateChanged(int arg1)
{
    if(arg1==2){
        ui->textEdit->append("Windows coché");
    }

}

void MainWindow::on_checkBoxOSXLion_stateChanged(int arg1)
{
    if(arg1==2){
        ui->textEdit->append("OS X Lion coché");
    }
}

void MainWindow::on_checkBoxLinux_stateChanged(int arg1)
{
    if(arg1==2){
        ui->textEdit->append("Linux coché");
    }
}

void MainWindow::on_comboBoxChoixOS_currentTextChanged(const QString &arg1)
{
    if(arg1=="Linux"){
        ui->textEdit->append("Linux");
    }
    if(arg1=="Windows"){
        ui->textEdit->append("Windows");
    }
    if(arg1=="OS X Lion"){
        ui->textEdit->append("OS X Lion");
    }
}

void MainWindow::on_actionC_triggered()
{
    ui->textEdit->append("C");
}

void MainWindow::on_actionJava_triggered()
{
    ui->textEdit->append("JAVA");
}

void MainWindow::on_actionCPlusPlus_triggered()
{
    ui->textEdit->append("C++");
}

void MainWindow::on_actionPHP_triggered()
{
    ui->textEdit->append("PHP");
}

void MainWindow::on_actionJavascript_triggered()
{
    ui->textEdit->append("Javascript");
}

void MainWindow::on_lineEditCode_textChanged(const QString &arg1)
{
    ui->textEdit->append(arg1);
}
