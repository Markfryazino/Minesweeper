/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_BombsLeft;
    QPushButton *Exit;
    QPushButton *Surround;
    QLabel *pictureLabel;
    QCheckBox *PlantFlag;
    QLabel *labelFlag;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(463, 350);
        MainWindow->setMinimumSize(QSize(463, 350));
        MainWindow->setMaximumSize(QSize(463, 350));
        MainWindow->setStyleSheet(QLatin1String("QMainWindow > QWidget {\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(350, 10, 106, 311));
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_BombsLeft = new QLabel(groupBox);
        label_BombsLeft->setObjectName(QStringLiteral("label_BombsLeft"));
        label_BombsLeft->setGeometry(QRect(10, 10, 86, 31));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_BombsLeft->setFont(font);
        label_BombsLeft->setWordWrap(true);
        Exit = new QPushButton(groupBox);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(10, 80, 75, 23));
        Exit->setFont(font);
        Surround = new QPushButton(groupBox);
        Surround->setObjectName(QStringLiteral("Surround"));
        Surround->setGeometry(QRect(10, 50, 75, 23));
        Surround->setFont(font);
        pictureLabel = new QLabel(groupBox);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(10, 150, 81, 151));
        PlantFlag = new QCheckBox(groupBox);
        PlantFlag->setObjectName(QStringLiteral("PlantFlag"));
        PlantFlag->setGeometry(QRect(10, 110, 21, 21));
        PlantFlag->setFont(font);
        labelFlag = new QLabel(groupBox);
        labelFlag->setObjectName(QStringLiteral("labelFlag"));
        labelFlag->setGeometry(QRect(30, 100, 71, 51));
        labelFlag->setFont(font);
        labelFlag->setWordWrap(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 330, 421, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\241\320\260\320\277\320\265\321\200 \320\276\321\202 Rofin Incorporated", nullptr));
        groupBox->setTitle(QString());
        label_BombsLeft->setText(QApplication::translate("MainWindow", "\320\221\320\276\320\274\320\261 \320\276\321\201\321\202\320\260\320\273\320\276\321\201\321\214: 0", nullptr));
        Exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        Surround->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\260\321\202\321\214\321\201\321\217", nullptr));
        pictureLabel->setText(QString());
        PlantFlag->setText(QString());
        labelFlag->setText(QApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \321\204\320\273\320\260\320\266\320\276\320\272", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260 \321\201\320\276\320\267\320\264\320\260\320\275\320\260 \321\201\321\202\321\203\320\264\320\270\320\265\320\271 Rofin Incorporated. \320\235\320\270\320\272\320\260\320\272\320\270\320\265 \320\277\321\200\320\260\320\262\320\260 \320\275\320\265 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
