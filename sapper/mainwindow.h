#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sapperbutton.h"
#include <QPushButton>
#include <vector>

namespace Ui {
class MainWindow;
}

class SapperButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, int state = 2);
    int m_state;
    ~MainWindow();

private:
    void GetSrand();
    Ui::MainWindow *ui;
    int m_NumAllBombs;
    void GetNum(int n, QPushButton *btn);
    void mousePressEvent(QMouseEvent *event);
    const int StartX = 25;
    const int StartY = 25;
    int MaxNumX = 0, MaxNumY = 0;
    SapperButton **array;
    int m_FoundBombs = 0;
    int m_Flags = 0;

signals:
    rClicked();
    open(SapperButton *sb);
    flag();
    loose();
    win();
private slots:
    void OpenWin();
    void OpenLoose();
    void OpenButton();
    void PlantFlag();
    void on_Exit_clicked();
};

#endif // MAINWINDOW_H
