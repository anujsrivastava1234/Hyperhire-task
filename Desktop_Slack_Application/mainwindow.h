#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtCore>
#include <QtGui>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void AddRoot(QString name,QString Description);
    void AddChild(QTreeWidgetItem *parent,QString name,QString Description);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_main_pushButton_close_clicked();

    void on_main_pushButton_resise_pressed();

    void on_main_pushButton_minimise_pressed();

    void on_pushButton_back_pressed();



    void on_pushButton_id_pressed();

    void on_pushButton_id_released();

    void on_mainwindow_pushButton_info_clicked();

    void on_pushButton_18_pressed();

    void on_pushButton_18_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
