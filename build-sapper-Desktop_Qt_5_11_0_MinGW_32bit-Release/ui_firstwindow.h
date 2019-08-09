/********************************************************************************
** Form generated from reading UI file 'firstwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWINDOW_H
#define UI_FIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *Easy;
    QRadioButton *Middle;
    QRadioButton *Hard;
    QPushButton *Newgame;

    void setupUi(QMainWindow *FirstWindow)
    {
        if (FirstWindow->objectName().isEmpty())
            FirstWindow->setObjectName(QStringLiteral("FirstWindow"));
        FirstWindow->resize(545, 335);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirstWindow->sizePolicy().hasHeightForWidth());
        FirstWindow->setSizePolicy(sizePolicy);
        FirstWindow->setMinimumSize(QSize(545, 335));
        FirstWindow->setMaximumSize(QSize(545, 335));
        FirstWindow->setStyleSheet(QLatin1String("QMainWindow > QWidget {\n"
"background-image: url(\":/image/pictures/war.png\");\n"
"}"));
        centralwidget = new QWidget(FirstWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(220, 50, 123, 84));
        Exit->setMinimumSize(QSize(123, 84));
        Exit->setMaximumSize(QSize(123, 84));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Exit->setFont(font);
        Exit->setAutoFillBackground(false);
        Exit->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188)"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(348, 50, 83, 84));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        Easy = new QRadioButton(layoutWidget);
        Easy->setObjectName(QStringLiteral("Easy"));
        Easy->setFont(font1);

        verticalLayout->addWidget(Easy);

        Middle = new QRadioButton(layoutWidget);
        Middle->setObjectName(QStringLiteral("Middle"));
        Middle->setFont(font1);
        Middle->setChecked(true);

        verticalLayout->addWidget(Middle);

        Hard = new QRadioButton(layoutWidget);
        Hard->setObjectName(QStringLiteral("Hard"));
        Hard->setFont(font1);
        Hard->setStyleSheet(QStringLiteral("background-color: transparent"));

        verticalLayout->addWidget(Hard);

        Newgame = new QPushButton(centralwidget);
        Newgame->setObjectName(QStringLiteral("Newgame"));
        Newgame->setGeometry(QRect(90, 50, 123, 84));
        Newgame->setFont(font);
        Newgame->setAutoFillBackground(false);
        Newgame->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188)"));
        FirstWindow->setCentralWidget(centralwidget);

        retranslateUi(FirstWindow);

        QMetaObject::connectSlotsByName(FirstWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FirstWindow)
    {
        FirstWindow->setWindowTitle(QApplication::translate("FirstWindow", "\320\241\320\260\320\277\320\265\321\200 \320\276\321\202 Rofin incorporated", nullptr));
        Exit->setText(QApplication::translate("FirstWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QApplication::translate("FirstWindow", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        Easy->setText(QApplication::translate("FirstWindow", "\320\235\320\270\320\267\320\272\320\260\321\217", nullptr));
        Middle->setText(QApplication::translate("FirstWindow", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217", nullptr));
        Hard->setText(QApplication::translate("FirstWindow", "\320\222\321\213\321\201\320\276\320\272\320\260\321\217", nullptr));
        Newgame->setText(QApplication::translate("FirstWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstWindow: public Ui_FirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
