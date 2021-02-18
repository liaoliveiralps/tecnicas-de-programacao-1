#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <poupanca.h>
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

    void on_pushButtonDepositar_clicked();

    void on_pushButtonSacar_clicked();

private:
    Ui::MainWindow *ui;
    lia::Poupanca cp;
};

#endif // MAINWINDOW_H
