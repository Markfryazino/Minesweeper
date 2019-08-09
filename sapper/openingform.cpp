#include "openingform.h"
#include "ui_openingform.h"
#include "mainwindow.h"

OpeningForm::OpeningForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpeningForm)
{
    ui->setupUi(this);
}

OpeningForm::~OpeningForm()
{
    delete ui;
}

void OpeningForm::on_Newgame_clicked()
{
    int state = 0;
    if (ui->Easy->isChecked()) state = 1;
    if (ui->Middle->isChecked()) state = 2;
    if (ui->Hard->isChecked()) state = 3;
    MainWindow *wind = new MainWindow(nullptr);
    wind->m_state = state;
    wind->show();
    this->destroy(true, false);
}

void OpeningForm::on_Exit_clicked()
{
    QApplication::quit();
}
