#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QTime>
#include "sapperbutton.h"
#include <QVBoxLayout>
#include <QPixmap>
#include <vector>
#include <QString>
#include "thefinalwindow.h"
#include <QMouseEvent>
#include <QBrush>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent, int state) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this, SIGNAL(loose()), this, SLOT(OpenLoose()));
    connect(this, SIGNAL(rClicked()), this, SLOT(PlantFlag()));
    connect(ui->Surround, SIGNAL(clicked(bool)), this, SLOT(OpenLoose()));
    connect(this, SIGNAL(win()), this, SLOT(OpenWin()));

    m_state = state;
    QPixmap pix(":/pictures/soldiers2.png");
    int w = ui->pictureLabel->width();
    int h = ui->pictureLabel->height();
    ui->pictureLabel->setPixmap(pix.scaled(w, h));
    GetSrand();
    switch (m_state)
    {
    case 1:
        MaxNumX = 10;
        MaxNumY = 10;
        m_NumAllBombs = 30;
        break;
    case 2:
        MaxNumX = 15;
        MaxNumY = 15;
        m_NumAllBombs = 70;
        break;
    case 3:
        MaxNumX = 20;
        MaxNumY = 20;
        m_NumAllBombs = 150;
        break;
    }
    int possibility = (MaxNumX*MaxNumY)/m_NumAllBombs;
    using std::vector;
    //vector<vector<SapperButton> > array(MaxNumX, vector<SapperButton>(MaxNumY));
    array = new SapperButton *[MaxNumX];
    for (int i = 0; i < MaxNumX; i++)
        array[i] = new SapperButton[MaxNumY];
    int CurrentX = 0, CurrentY = 0;
    for (CurrentX = 0; CurrentX < MaxNumX; CurrentX++)
        array[CurrentX][CurrentY] = SapperButton(CurrentX, CurrentY, StartX, StartY,
                                                 ui->centralWidget, false, possibility);
    int CurrentBombs = 0;
    for (CurrentY = 1; CurrentY < MaxNumY; CurrentY++)
        for (CurrentX = 0; CurrentX < MaxNumX; CurrentX++)
        {
            array[CurrentX][CurrentY] = SapperButton(CurrentX, CurrentY, StartX, StartY,
                                                     ui->centralWidget, true, possibility);
            if (array[CurrentX][CurrentY].m_ifBomb) CurrentBombs++;
            connect(array[CurrentX][CurrentY].m_btn, SIGNAL(pressed()),
                    this, SLOT(OpenButton()));
        }
    m_NumAllBombs = CurrentBombs;
    m_Flags = m_NumAllBombs;
    QString s;
    s.setNum(CurrentBombs);
    ui->label_BombsLeft->setText("Флажков осталось: " + s);

    for (CurrentY = 0; CurrentY < MaxNumY; CurrentY++)
        for (CurrentX = 0; CurrentX < MaxNumX; CurrentX++)
        {
            int n = 0;
            if ((CurrentX > 0) && (CurrentY > 0) && (array[CurrentX - 1][CurrentY - 1].m_ifBomb)) n++;
            if ((CurrentY > 0) && (array[CurrentX][CurrentY - 1].m_ifBomb)) n++;
            if ((CurrentX < MaxNumX - 1) && (CurrentY > 0) && (array[CurrentX + 1][CurrentY - 1].m_ifBomb)) n++;
            if ((CurrentX > 0) && (array[CurrentX - 1][CurrentY].m_ifBomb)) n++;
            if ((CurrentX < MaxNumX - 1) && (array[CurrentX + 1][CurrentY].m_ifBomb)) n++;
            if ((CurrentX > 0) && (CurrentY < MaxNumY - 1) && (array[CurrentX - 1][CurrentY + 1].m_ifBomb)) n++;
            if ((CurrentY < MaxNumY - 1) && (array[CurrentX][CurrentY + 1].m_ifBomb)) n++;
            if ((CurrentX < MaxNumX - 1) && (CurrentY < MaxNumY - 1) && (array[CurrentX + 1][CurrentY + 1].m_ifBomb)) n++;
            array[CurrentX][CurrentY].SetNum(n);
            if (!CurrentY) array[CurrentX][CurrentY].GetNum();
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GetSrand()
{
    QTime mid(0, 0, 0);
    qsrand(mid.secsTo(QTime::currentTime()));
}


void MainWindow::on_Exit_clicked()
{
    QApplication::quit();
}

void MainWindow::PlantFlag()
{
    int X = QCursor::pos().rx();
    int Y = QCursor::pos().ry();
    //X = X/15;
    //Y = Y/15;
    QString s1, s2;
    s1.setNum(X); s2.setNum(Y);
    ui->label->setText("jo " + s1 + " " + s2);
    /*QPixmap pix;
    pix.load(":/pictures/flag.png");
    pix.scaled(15, 15);
    QBrush brush;
    brush.setTexture(pix);
    QPalette palette (array[X][Y].m_btn->palette());
    palette.setBrush(QPalette::window(), brush);
    array[X][Y].m_btn->setPalette(palette);*/
    //array[X][Y].m_btn->setStyleSheet("background-image: url(:/pictures/flag.png)");

    for (int i = 0; i < MaxNumX; i++)
        for (int j = 0; j <MaxNumY; j++)
        {
            int l = 0, r = 0, l2 = 0, r2 = 0;
            array[i][j].m_btn->geometry().getCoords(&l, &r, &l2, &r2);
            if ((X > l)&&(X < l2)&&(Y > r)&&(Y < r2))
                array[X][Y].m_btn->setText("Б");
        }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::RightButton)
        emit rClicked();
    /*if (event->button() == Qt::LeftButton)
    {
        ui->label_BombsLeft->setText("работает");
        for (int i = 0; i < MaxNumX; i++)
            for (int j = 0; j <MaxNumY; j++)
                if (array[i][j].m_btn->isDown())
                {
                    SapperButton *ptr = &array[i][j];
                    emit open(ptr);
                }
    }*/
}

void MainWindow::OpenButton()
{
    for (int i = 0; i < MaxNumX; i++)
        for (int j = 0; j <MaxNumY; j++)
            if (array[i][j].m_btn->isDown())
            {
                if (ui->PlantFlag->isChecked())
                {
                    if (m_Flags != 0)
                    {
                        array[i][j].m_btn->setStyleSheet("border-image: url(:/pictures/flag.png)");
                        ui->PlantFlag->setChecked(false);
                        m_Flags--;
                        QString s;
                        s.setNum(m_Flags);
                        ui->label_BombsLeft->setText("Флажков осталось: " + s);
                        if (array[i][j].m_ifBomb) m_FoundBombs++;
                        if (m_FoundBombs == m_NumAllBombs) emit win();
                        array[i][j].m_flag = true;
                    }
                }
                else
                {
                    SapperButton *ptr = &array[i][j];
                    if (array[i][j].m_flag) m_Flags++;
                    {
                        array[i][j].m_flag = false;
                        QString s;
                        s.setNum(m_Flags);
                        ui->label_BombsLeft->setText("Флажков осталось: " + s);
                    }
                    if (ptr->m_ifBomb) emit loose();
                    else ptr->GetNum();
                }
            }
}

void MainWindow::OpenLoose()
{
    TheFinalWindow *w = new TheFinalWindow(nullptr, false, m_state, m_NumAllBombs, m_FoundBombs);
    w->show();
    this->destroy(true, false);
}

void MainWindow::OpenWin()
{
    TheFinalWindow *w = new TheFinalWindow(nullptr, true, m_state, m_NumAllBombs, m_FoundBombs);
    w->show();
    this->destroy(true, false);
}








