#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <racionais.h>
#include <QString>
#include <QMessageBox>

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
    void on_pushButtonSoma_clicked();

    void on_pushButtonSubtracao_clicked();

    void on_pushButtonMultiplicacao_clicked();

    void on_pushButtonDivisao_clicked();

    void on_pushButtonIgualdade_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
