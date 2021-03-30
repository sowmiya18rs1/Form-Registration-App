#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QValidator>
#include <QDebug>
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"SOWMIYA 212218108054","Successfully Completed!!");
}

void MainWindow::on_pushButton_4_clicked()
{
    foreach(QLineEdit* widget, findChildren<QLineEdit*>())
        {
            widget->clear();

        }
       QMessageBox::information(this,"SOWMIYA 212218108054","data clear");
}


void MainWindow::on_lineEdit_12_returnPressed()
{

    if(ui->lineEdit_7->text().length()>10)
               QMessageBox::information(this,"SOWMIYA 212218108054","size over write!");


}



void MainWindow::on_lineEdit_9_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
        QRegularExpressionMatch match = re.match(ui->lineEdit_7->text());
        bool hasMatch = match.hasMatch();
        if (!hasMatch)
        {
           QMessageBox::information(this,"SOWMIYA 212218108054","Invalid Format");
        }

}

void MainWindow::on_radioButton_4_clicked()
{
    QButtonGroup group;
     QList<QRadioButton *>allButtons;

        qDebug() <<allButtons.size();
        for(int i=0;i<allButtons.size();++i)
        {
            group.addButton(allButtons[i],i);
        }
        qDebug() <<group.checkedId();
        qDebug() <<group.checkedButton();

}
