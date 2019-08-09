#ifndef THEFINALWINDOW_H
#define THEFINALWINDOW_H

#include <QMainWindow>

namespace Ui {
class TheFinalWindow;
}

class TheFinalWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TheFinalWindow(QWidget *parent = 0, bool win = true, int Difficulty = 2, int AllBombs = 15,
                            int foundBombs = 15);
    ~TheFinalWindow();

private slots:
    void on_button_NewGame_clicked();

    void on_button_Exit_clicked();

private:
    Ui::TheFinalWindow *ui;
    bool m_win;
    int m_AllBombs;
    int m_foundBombs;
    int m_Difficulty;
};

#endif // THEFINALWINDOW_H
