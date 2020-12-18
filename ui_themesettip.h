/********************************************************************************
** Form generated from reading UI file 'themesettip.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMESETTIP_H
#define UI_THEMESETTIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_themesetTip
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *themesetTip)
    {
        if (themesetTip->objectName().isEmpty())
            themesetTip->setObjectName(QString::fromUtf8("themesetTip"));
        themesetTip->resize(271, 225);
        label = new QLabel(themesetTip);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 171, 16));
        pushButton = new QPushButton(themesetTip);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 110, 93, 28));

        retranslateUi(themesetTip);

        QMetaObject::connectSlotsByName(themesetTip);
    } // setupUi

    void retranslateUi(QDialog *themesetTip)
    {
        themesetTip->setWindowTitle(QCoreApplication::translate("themesetTip", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("themesetTip", "\346\202\250\346\232\202\346\234\252\351\200\211\346\213\251\344\270\273\351\242\230", nullptr));
        pushButton->setText(QCoreApplication::translate("themesetTip", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class themesetTip: public Ui_themesetTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMESETTIP_H
