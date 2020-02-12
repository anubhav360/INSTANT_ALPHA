#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class blockchain;
class block;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void consensus(int g);
private slots:
    void on_MainWindow_destroyed();


private:
    Ui::MainWindow *ui;
    int timerid;
protected:
    void timerEvent(QTimerEvent *event);
    friend void hash(blockchain &p, block *n);
};

#endif // MAINWINDOW_H
