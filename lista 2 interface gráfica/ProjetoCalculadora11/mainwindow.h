#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <calculadora.h>
#include <QString>
#include <QMessageBox>
#include <cmath>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonSub_clicked();

    void on_pushButtonMulti_clicked();

    void on_pushButtonDiv_clicked();

    void on_pushButtonRaiz_clicked();

    void on_pushButtonPot_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
