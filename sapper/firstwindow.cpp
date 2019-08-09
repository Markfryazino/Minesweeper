#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "mainwindow.h"

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_Newgame_clicked()
{
    int state = 0;
    if (ui->Easy->isChecked()) state = 1;
    if (ui->Middle->isChecked()) state = 2;
    if (ui->Hard->isChecked()) state = 3;
    MainWindow *wind = new MainWindow(nullptr, state);
    wind->show();
    this->destroy(true, false);
}

void FirstWindow::on_Exit_clicked()
{
    QApplication::quit();
}
