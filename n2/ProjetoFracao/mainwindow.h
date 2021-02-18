#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fracao.h>
#include <QString>

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

    void on_pushButtonSub_clicked();

    void on_pushButtonMulti_clicked();

    void on_pushButtonDivi_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
