#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void n1Handler();
    void n2Handler();
    void n3Handler();
    void n4Handler();
    void n5Handler();
    void n6Handler();
    void updateProgressBar();

private:
    Ui::MainWindow *ui;
    short player1Time = 0;
    short player2Time = 0;
    short currentPlayer = 0;
    short playTime = 0;
    QTimer *pQTimer;
    void setGameInfoText(QString,short);

};
#endif // MAINWINDOW_H
