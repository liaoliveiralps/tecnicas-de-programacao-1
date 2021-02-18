#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <pessoa.h>
#include <QString>
#include <QMainWindow>
#include <QMessageBox>
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
    void on_pushButtonExecutar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
