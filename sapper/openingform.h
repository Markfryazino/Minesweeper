#ifndef OPENINGFORM_H
#define OPENINGFORM_H

#include <QWidget>

namespace Ui {
class OpeningForm;
}

class OpeningForm : public QWidget
{
    Q_OBJECT

public:
    explicit OpeningForm(QWidget *parent = 0);
    ~OpeningForm();

private slots:
    void on_Newgame_clicked();

    void on_Exit_clicked();

private:
    Ui::OpeningForm *ui;
};

#endif // OPENINGFORM_H
