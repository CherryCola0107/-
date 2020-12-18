/********************************************************************************
** Form generated from reading UI file 'visittimetip.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITTIMETIP_H
#define UI_VISITTIMETIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_visittimeTip
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *visittimeTip)
    {
        if (visittimeTip->objectName().isEmpty())
            visittimeTip->setObjectName(QString::fromUtf8("visittimeTip"));
        visittimeTip->resize(347, 255);
        label = new QLabel(visittimeTip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 201, 51));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Adobe Caslon Pro Bold\";"));
        pushButton = new QPushButton(visittimeTip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 130, 93, 28));

        retranslateUi(visittimeTip);

        QMetaObject::connectSlotsByName(visittimeTip);
    } // setupUi

    void retranslateUi(QDialog *visittimeTip)
    {
        visittimeTip->setWindowTitle(QCoreApplication::translate("visittimeTip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("visittimeTip", "\350\257\267\346\214\211\350\246\201\346\261\202\350\276\223\345\205\245\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("visittimeTip", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visittimeTip: public Ui_visittimeTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITTIMETIP_H
