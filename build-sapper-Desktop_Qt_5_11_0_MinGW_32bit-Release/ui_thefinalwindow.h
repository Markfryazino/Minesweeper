/********************************************************************************
** Form generated from reading UI file 'thefinalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEFINALWINDOW_H
#define UI_THEFINALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheFinalWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_finalimage;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_state;
    QLabel *label_level;
    QLabel *label_rezult;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_NewGame;
    QPushButton *button_Exit;

    void setupUi(QMainWindow *TheFinalWindow)
    {
        if (TheFinalWindow->objectName().isEmpty())
            TheFinalWindow->setObjectName(QStringLiteral("TheFinalWindow"));
        TheFinalWindow->resize(499, 273);
        TheFinalWindow->setStyleSheet(QLatin1String("QMainWindow > QWidget {\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        centralwidget = new QWidget(TheFinalWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_finalimage = new QLabel(centralwidget);
        label_finalimage->setObjectName(QStringLiteral("label_finalimage"));
        label_finalimage->setGeometry(QRect(210, 0, 291, 271));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 90, 177, 113));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_state = new QLabel(widget);
        label_state->setObjectName(QStringLiteral("label_state"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_state->setFont(font);

        verticalLayout->addWidget(label_state);

        label_level = new QLabel(widget);
        label_level->setObjectName(QStringLiteral("label_level"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_level->setFont(font1);

        verticalLayout->addWidget(label_level);

        label_rezult = new QLabel(widget);
        label_rezult->setObjectName(QStringLiteral("label_rezult"));
        label_rezult->setFont(font1);

        verticalLayout->addWidget(label_rezult);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_NewGame = new QPushButton(widget);
        button_NewGame->setObjectName(QStringLiteral("button_NewGame"));
        button_NewGame->setFont(font1);

        horizontalLayout->addWidget(button_NewGame);

        button_Exit = new QPushButton(widget);
        button_Exit->setObjectName(QStringLiteral("button_Exit"));
        button_Exit->setFont(font1);

        horizontalLayout->addWidget(button_Exit);


        verticalLayout_2->addLayout(horizontalLayout);

        TheFinalWindow->setCentralWidget(centralwidget);

        retranslateUi(TheFinalWindow);

        QMetaObject::connectSlotsByName(TheFinalWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TheFinalWindow)
    {
        TheFinalWindow->setWindowTitle(QApplication::translate("TheFinalWindow", "\320\241\320\260\320\277\320\265\321\200 \320\276\321\202 Rofin Incorporated", nullptr));
        label_finalimage->setText(QString());
        label_state->setText(QApplication::translate("TheFinalWindow", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        label_level->setText(QApplication::translate("TheFinalWindow", "\320\235\320\260 \321\203\321\200\320\276\320\262\320\275\320\265  \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270 2", nullptr));
        label_rezult->setText(QApplication::translate("TheFinalWindow", "\320\221\320\276\320\274\320\261 \320\276\320\261\320\265\320\267\320\262\321\200\320\265\320\266\320\265\320\275\320\276: 20/20", nullptr));
        button_NewGame->setText(QApplication::translate("TheFinalWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        button_Exit->setText(QApplication::translate("TheFinalWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheFinalWindow: public Ui_TheFinalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEFINALWINDOW_H
