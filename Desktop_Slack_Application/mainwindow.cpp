#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>



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

void MainWindow::AddRoot(QString name, QString Description)
{

}

void MainWindow::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{

}

void MainWindow::on_main_pushButton_close_clicked()
{
    QApplication::quit();
}

void MainWindow::on_main_pushButton_resise_pressed()
{
        setWindowState(Qt::WindowFullScreen);

}

void MainWindow::on_main_pushButton_minimise_pressed()
{
    setWindowState(Qt::WindowMinimized);
}

void MainWindow::on_pushButton_back_pressed()
{
    ui->pushButton_back->setStyleSheet("QPushButton:hover:!pressed{color: whitesmoke}");
}



void MainWindow::on_pushButton_id_pressed()
{
    ui->pushButton_id->setStyleSheet("QPushButton{border:3px solid white;border-radius:5px;color: rgb(255, 255, 255);font: 16pt 'Titillium Web';background-color: rgb(97, 96, 97);}");
}

void MainWindow::on_pushButton_id_released()
{
    ui->pushButton_id->setStyleSheet("QPushButton:{border:none;border-radius:5px;"
                                                   "color: rgb(255, 255, 255);"
                                                    "font: 16pt 'Titillium Web';"
                                                    "background-color: rgb(97, 96, 97);}");
}

void MainWindow::on_mainwindow_pushButton_info_clicked()
{
    QMessageBox::information(this,tr("Slack Application"),tr("Created By - Anuj Srivastava \n Email - Anujsrivastava1596@gmail.com"));
}

void MainWindow::on_pushButton_18_pressed()
{
    ui->channels_list_Qframe->hide();
}

void MainWindow::on_pushButton_18_released()
{
    ui->channels_list_Qframe->show();
}
