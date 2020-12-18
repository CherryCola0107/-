/********************************************************************************
** Form generated from reading UI file 'namesettip.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMESETTIP_H
#define UI_NAMESETTIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_namesetTip
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *namesetTip)
    {
        if (namesetTip->objectName().isEmpty())
            namesetTip->setObjectName(QString::fromUtf8("namesetTip"));
        namesetTip->resize(400, 300);
        label = new QLabel(namesetTip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(102, 67, 201, 16));
        pushButton = new QPushButton(namesetTip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 140, 93, 28));

        retranslateUi(namesetTip);

        QMetaObject::connectSlotsByName(namesetTip);
    } // setupUi

    void retranslateUi(QDialog *namesetTip)
    {
        namesetTip->setWindowTitle(QCoreApplication::translate("namesetTip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("namesetTip", "\350\257\267\345\205\210\350\276\223\345\205\245\346\254\262\344\277\256\346\224\271\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("namesetTip", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class namesetTip: public Ui_namesetTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMESETTIP_H
