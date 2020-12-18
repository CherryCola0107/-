/********************************************************************************
** Form generated from reading UI file 'posinput.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSINPUT_H
#define UI_POSINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_posInput
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *posInput)
    {
        if (posInput->objectName().isEmpty())
            posInput->setObjectName(QString::fromUtf8("posInput"));
        posInput->resize(611, 501);
        comboBox = new QComboBox(posInput);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 40, 231, 31));
        comboBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(posInput);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 330, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        comboBox_2 = new QComboBox(posInput);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(30, 90, 231, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        textBrowser = new QTextBrowser(posInput);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 141, 421, 221));
        pushButton_2 = new QPushButton(posInput);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 430, 93, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        pushButton_3 = new QPushButton(posInput);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 430, 93, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        pushButton_4 = new QPushButton(posInput);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 430, 93, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));
        pushButton_5 = new QPushButton(posInput);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(320, 430, 93, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 11pt \"Adobe Arabic\";"));

        retranslateUi(posInput);

        QMetaObject::connectSlotsByName(posInput);
    } // setupUi

    void retranslateUi(QDialog *posInput)
    {
        posInput->setWindowTitle(QCoreApplication::translate("posInput", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("posInput", "\344\270\203\344\270\252\345\260\217\347\237\256\344\272\272\347\237\277\345\261\261\350\275\246", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("posInput", "\347\210\261\344\270\275\344\270\235\346\242\246\346\270\270\344\273\231\345\242\203\350\277\267\345\256\253", nullptr));

        pushButton->setText(QCoreApplication::translate("posInput", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("posInput", "\350\267\257\345\276\204\351\225\277\345\272\246", nullptr));
        pushButton_3->setText(QCoreApplication::translate("posInput", "\345\217\202\350\247\202\346\227\266\351\227\264", nullptr));
        pushButton_4->setText(QCoreApplication::translate("posInput", "\347\255\211\345\276\205\346\227\266\351\227\264", nullptr));
        pushButton_5->setText(QCoreApplication::translate("posInput", "\346\231\257\347\202\271\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class posInput: public Ui_posInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSINPUT_H
