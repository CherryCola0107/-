/********************************************************************************
** Form generated from reading UI file 'modifyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYINFO_H
#define UI_MODIFYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_modifyInfo
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *modifyInfo)
    {
        if (modifyInfo->objectName().isEmpty())
            modifyInfo->setObjectName(QString::fromUtf8("modifyInfo"));
        modifyInfo->resize(636, 424);
        label = new QLabel(modifyInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 151, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Adobe Caslon Pro Bold\";"));
        lineEdit = new QLineEdit(modifyInfo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 113, 21));
        label_2 = new QLabel(modifyInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 101, 16));
        lineEdit_2 = new QLineEdit(modifyInfo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 70, 113, 21));
        pushButton = new QPushButton(modifyInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 30, 93, 28));
        label_3 = new QLabel(modifyInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 72, 15));
        textEdit = new QTextEdit(modifyInfo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(200, 110, 291, 131));
        label_4 = new QLabel(modifyInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 131, 16));
        lineEdit_3 = new QLineEdit(modifyInfo);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 255, 113, 21));
        label_5 = new QLabel(modifyInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 300, 72, 15));
        pushButton_5 = new QPushButton(modifyInfo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 360, 93, 28));
        radioButton_6 = new QRadioButton(modifyInfo);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(340, 330, 115, 19));
        radioButton_4 = new QRadioButton(modifyInfo);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(150, 330, 115, 19));
        radioButton = new QRadioButton(modifyInfo);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(150, 300, 115, 19));
        radioButton_3 = new QRadioButton(modifyInfo);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(340, 300, 115, 19));
        radioButton_5 = new QRadioButton(modifyInfo);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(250, 330, 115, 19));
        radioButton_2 = new QRadioButton(modifyInfo);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 300, 115, 19));

        retranslateUi(modifyInfo);

        QMetaObject::connectSlotsByName(modifyInfo);
    } // setupUi

    void retranslateUi(QDialog *modifyInfo)
    {
        modifyInfo->setWindowTitle(QCoreApplication::translate("modifyInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modifyInfo", "\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("modifyInfo", "\346\231\257\347\202\271\347\232\204\346\226\260\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("modifyInfo", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("modifyInfo", "\346\231\257\347\202\271\344\273\213\347\273\215", nullptr));
        label_4->setText(QCoreApplication::translate("modifyInfo", "\345\217\202\350\247\202\351\242\204\350\256\241\347\224\250\346\227\266", nullptr));
        label_5->setText(QCoreApplication::translate("modifyInfo", "\344\270\273\351\242\230\347\274\226\345\217\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("modifyInfo", "\347\241\256\350\256\244", nullptr));
        radioButton_6->setText(QCoreApplication::translate("modifyInfo", "\347\261\263\345\245\207\345\244\247\350\241\227", nullptr));
        radioButton_4->setText(QCoreApplication::translate("modifyInfo", "\346\216\242\351\231\251\345\262\233", nullptr));
        radioButton->setText(QCoreApplication::translate("modifyInfo", "\346\230\216\346\227\245\344\270\226\347\225\214", nullptr));
        radioButton_3->setText(QCoreApplication::translate("modifyInfo", "\345\245\207\346\203\263\350\212\261\345\233\255", nullptr));
        radioButton_5->setText(QCoreApplication::translate("modifyInfo", "\345\256\235\350\227\217\346\271\276", nullptr));
        radioButton_2->setText(QCoreApplication::translate("modifyInfo", "\346\242\246\345\271\273\344\270\226\347\225\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyInfo: public Ui_modifyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYINFO_H
