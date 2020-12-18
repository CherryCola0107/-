/********************************************************************************
** Form generated from reading UI file 'admi.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMI_H
#define UI_ADMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admi
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *admi)
    {
        if (admi->objectName().isEmpty())
            admi->setObjectName(QString::fromUtf8("admi"));
        admi->resize(697, 490);
        admi->setStyleSheet(QString::fromUtf8("#admi{border-image: url(:/new/prefix1/image/timg.jpg);}\n"
""));
        label = new QLabel(admi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 130, 311, 61));
        label->setStyleSheet(QString::fromUtf8("font: 75 24pt \"Adobe Arabic\";\n"
"\n"
"color:white;"));
        label->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(admi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(82, 250, 141, 81));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Adobe Caslon Pro Bold\";"));
        pushButton_2 = new QPushButton(admi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 250, 141, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 75 14pt \"Adobe Caslon Pro Bold\";"));
        pushButton_3 = new QPushButton(admi);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 250, 161, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 75 14pt \"Adobe Caslon Pro Bold\";"));

        retranslateUi(admi);

        QMetaObject::connectSlotsByName(admi);
    } // setupUi

    void retranslateUi(QDialog *admi)
    {
        admi->setWindowTitle(QCoreApplication::translate("admi", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("admi", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("admi", "\346\267\273\345\212\240\346\231\257\347\202\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admi", "\345\210\240\351\231\244\346\231\257\347\202\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admi", "\344\277\256\346\224\271\346\231\257\347\202\271\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admi: public Ui_admi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMI_H
