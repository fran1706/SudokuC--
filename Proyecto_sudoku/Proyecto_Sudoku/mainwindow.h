#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


    void on_toolButton_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *numberButton[9];
    QLabel *labelNumber[81];

};

#endif // MAINWINDOW_H
