/********************************************************************************
** Form generated from reading UI file 'showaround.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWAROUND_H
#define UI_SHOWAROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_showAround
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *showAround)
    {
        if (showAround->objectName().isEmpty())
            showAround->setObjectName(QString::fromUtf8("showAround"));
        showAround->resize(438, 293);
        label = new QLabel(showAround);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 341, 81));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(showAround);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 150, 93, 28));

        retranslateUi(showAround);

        QMetaObject::connectSlotsByName(showAround);
    } // setupUi

    void retranslateUi(QDialog *showAround)
    {
        showAround->setWindowTitle(QCoreApplication::translate("showAround", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("showAround", "\345\267\262\346\210\220\345\212\237\345\210\240\351\231\244", nullptr));
        pushButton->setText(QCoreApplication::translate("showAround", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showAround: public Ui_showAround {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWAROUND_H
