#ifndef SAPPERBUTTON_H
#define SAPPERBUTTON_H

#include "mainwindow.h"
#include <QPushButton>

class SapperButton
{
private:
    int m_numX;
    int m_numY;
public:
    int m_size = 15;
    SapperButton(int numX, int numY, int StartX, int StartY, QWidget *par, bool ifActive, int possibility);
    SapperButton();
    bool m_ifBomb;
    int m_numBombs;
    QPushButton *m_btn;
    void GetNum();
    void SetNum(int n);
    void SetStyle();
    bool m_flag = false;
public slots:
    //void ButPressed();
};

#endif // SAPPERBUTTON_H
