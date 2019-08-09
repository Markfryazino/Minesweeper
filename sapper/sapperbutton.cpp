#include "sapperbutton.h"

SapperButton::SapperButton(int numX, int numY, int StartX, int StartY, QWidget *par, bool ifActive, int possibility)
{
    m_numX = numX;
    m_numY = numY;
    m_btn = new QPushButton(par);
    m_btn->setGeometry(numX*m_size + StartX, numY*m_size + StartY, m_size, m_size);
    if (ifActive)
    {
        m_ifBomb = !(qrand() % possibility);
        m_btn->setStyleSheet("background-color: rgb(216, 214, 224)");
    }
    else
    {
        m_btn->setStyleSheet("background-color: rgb(252, 252, 222)");
        m_ifBomb = false;
    }
    m_numBombs = 0;
}

SapperButton::SapperButton()
{
}

void SapperButton::SetStyle()
{
    m_btn->setStyleSheet("background-color: rgb(252, 252, 222)");
}

void SapperButton::SetNum(int n)
{
    m_numBombs = n;
}

void SapperButton::GetNum()
{
    SetStyle();
    switch (m_numBombs)
    {
    /*case 1:
        m_btn->setStyleSheet("color: Qt::blue");
        break;
    case 2:
        m_btn->setStyleSheet("color: Qt::green");
        break;
    case 3:
        m_btn->setStyleSheet("color: Qt::red");
        break;
    case 4:
        m_btn->setStyleSheet("color: Qt::magente");
        break;
    case 5:
        m_btn->setStyleSheet("color: Qt::cyan");
        break;
    case 6:
        m_btn->setStyleSheet("color: Qt::gray");
        break;
    case 7:
        m_btn->setStyleSheet("color: Qt::darkGreen");
        break;
    case 8:
        m_btn->setStyleSheet("color: Qt::black");
        break;*/
    }
    QString s;
    s.setNum(m_numBombs);
    m_btn->setText(s);
}

/*void SapperButton::ButPressed()
{
    if (m_ifBomb) emit loose(m_FoundBombs);
    else GetNum();
}*/

