#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<QString>
#include<racional.h>
#include<QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString simbolo = "+";
    int contador = 0;


private slots:    
    void on_pushButtonOperacao_clicked();

    void on_pushButtonExecutar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
