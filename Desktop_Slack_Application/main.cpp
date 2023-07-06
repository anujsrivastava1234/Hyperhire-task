#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QMainWindow *mainWindow = new QMainWindow;
    QWidget *centralWidget = new QWidget(mainWindow);
    mainWindow->setCentralWidget(centralWidget);

    w.resize(1240,894);

    w.setWindowFlag(Qt::FramelessWindowHint);


    centralWidget->setStyleSheet("QWidget{border-radius:10px;}");
    w.show();
    return a.exec();
}
