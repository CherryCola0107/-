/********************************************************************************
** Form generated from reading UI file 'deletemark.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMARK_H
#define UI_DELETEMARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteMark
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *deleteMark)
    {
        if (deleteMark->objectName().isEmpty())
            deleteMark->setObjectName(QString::fromUtf8("deleteMark"));
        deleteMark->resize(550, 413);
        pushButton = new QPushButton(deleteMark);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 180, 191, 28));
        comboBox = new QComboBox(deleteMark);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 110, 351, 51));
        comboBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Adobe Arabic\";"));
        label = new QLabel(deleteMark);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 184, 78));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Adobe Arabic\";"));

        retranslateUi(deleteMark);

        QMetaObject::connectSlotsByName(deleteMark);
    } // setupUi

    void retranslateUi(QDialog *deleteMark)
    {
        deleteMark->setWindowTitle(QCoreApplication::translate("deleteMark", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteMark", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("deleteMark", "\350\257\267\351\200\211\346\213\251\350\246\201\345\210\240\351\231\244\346\231\257\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteMark: public Ui_deleteMark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMARK_H
