#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();

private slots:
    void on_Newgame_clicked();

    void on_Exit_clicked();

private:
    Ui::FirstWindow *ui;
};

#endif // FIRSTWINDOW_H
