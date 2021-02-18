#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <cmath>
#include <QMainWindow>
#include <QString>
#include<QTableWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonExecutar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
