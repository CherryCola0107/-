/********************************************************************************
** Form generated from reading UI file 'newnametip.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWNAMETIP_H
#define UI_NEWNAMETIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newnameTip
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *newnameTip)
    {
        if (newnameTip->objectName().isEmpty())
            newnameTip->setObjectName(QString::fromUtf8("newnameTip"));
        newnameTip->resize(350, 251);
        label = new QLabel(newnameTip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 271, 71));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(newnameTip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 93, 28));

        retranslateUi(newnameTip);

        QMetaObject::connectSlotsByName(newnameTip);
    } // setupUi

    void retranslateUi(QDialog *newnameTip)
    {
        newnameTip->setWindowTitle(QCoreApplication::translate("newnameTip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newnameTip", "\346\202\250\350\277\230\346\234\211\346\234\252\350\276\223\345\205\245\347\232\204\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("newnameTip", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newnameTip: public Ui_newnameTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWNAMETIP_H
