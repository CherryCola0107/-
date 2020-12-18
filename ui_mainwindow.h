/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *Mainwindow)
    {
        if (Mainwindow->objectName().isEmpty())
            Mainwindow->setObjectName(QString::fromUtf8("Mainwindow"));
        Mainwindow->resize(926, 641);
        Mainwindow->setStyleSheet(QString::fromUtf8("#Mainwindow{border-image: url(:/new/prefix1/image/mainwindow.jpg);}\n"
""));
        pushButton = new QPushButton(Mainwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 350, 221, 131));
        pushButton->setStyleSheet(QString::fromUtf8("font: 25 22pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        pushButton_2 = new QPushButton(Mainwindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 350, 221, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 25 22pt \"Adobe \345\256\213\344\275\223 Std L\";"));
        label = new QLabel(Mainwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 120, 511, 141));
        label->setStyleSheet(QString::fromUtf8("font: 75 36pt \"\345\276\256\350\275\257\347\256\200\351\232\266\344\271\246\";"));

        retranslateUi(Mainwindow);

        QMetaObject::connectSlotsByName(Mainwindow);
    } // setupUi

    void retranslateUi(QWidget *Mainwindow)
    {
        Mainwindow->setWindowTitle(QCoreApplication::translate("Mainwindow", "Mainwindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Mainwindow", "\346\270\270\345\256\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Mainwindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        label->setText(QCoreApplication::translate("Mainwindow", "\346\231\257\345\214\272\345\257\274\350\210\252\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
