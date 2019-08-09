#include "thefinalwindow.h"
#include "ui_thefinalwindow.h"
#include <QPixmap>
#include <QString>
#include <firstwindow.h>

TheFinalWindow::TheFinalWindow(QWidget *parent, bool win, int Difficulty, int AllBombs, int foundBombs) :
    QMainWindow(parent),
    ui(new Ui::TheFinalWindow)
{
    ui->setupUi(this);
    m_win = win;
    if (m_win)
    {
        QPixmap pix(":/pictures/victory2.png");
        int w = ui->label_finalimage->width();
        int h = ui->label_finalimage->height();
        ui->label_finalimage->setPixmap(pix.scaled(w, h));
        ui->label_state->setText("Победа!");
    }
    else
    {
        QPixmap pix(":/image/pictures/explosion.png");
        int w = ui->label_finalimage->width();
        int h = ui->label_finalimage->height();
        ui->label_finalimage->setPixmap(pix.scaled(w, h));
        ui->label_state->setText("Поражение!");
    }
    QString s, s1, s2;
    s.setNum(Difficulty);
    ui->label_level->setText("На уровне сложности " + s + ".");
    s1.setNum(foundBombs);
    s2.setNum(AllBombs);
    ui->label_rezult->setText("Бомб обезврежено: " + s1 + "/" + s2 + ".");
}

TheFinalWindow::~TheFinalWindow()
{
    delete ui;
}

void TheFinalWindow::on_button_NewGame_clicked()
{
    FirstWindow *w = new FirstWindow(nullptr);
    w->show();
    this->destroy(true, false);
}

void TheFinalWindow::on_button_Exit_clicked()
{
    QApplication::quit();
}
