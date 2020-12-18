/********************************************************************************
** Form generated from reading UI file 'errortip.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORTIP_H
#define UI_ERRORTIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_errorTip
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *errorTip)
    {
        if (errorTip->objectName().isEmpty())
            errorTip->setObjectName(QString::fromUtf8("errorTip"));
        errorTip->resize(325, 240);
        label = new QLabel(errorTip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 251, 51));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(errorTip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 140, 93, 28));

        retranslateUi(errorTip);

        QMetaObject::connectSlotsByName(errorTip);
    } // setupUi

    void retranslateUi(QDialog *errorTip)
    {
        errorTip->setWindowTitle(QCoreApplication::translate("errorTip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("errorTip", "\350\276\223\345\205\245\351\224\231\350\257\257\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245", nullptr));
        pushButton->setText(QCoreApplication::translate("errorTip", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorTip: public Ui_errorTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORTIP_H
