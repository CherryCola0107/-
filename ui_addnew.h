/********************************************************************************
** Form generated from reading UI file 'addnew.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEW_H
#define UI_ADDNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addNew
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLabel *label_7;

    void setupUi(QDialog *addNew)
    {
        if (addNew->objectName().isEmpty())
            addNew->setObjectName(QString::fromUtf8("addNew"));
        addNew->resize(543, 436);
        addNew->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Adobe Caslon Pro Bold\";"));
        label = new QLabel(addNew);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Adobe Caslon Pro Bold\";"));
        lineEdit = new QLineEdit(addNew);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 30, 113, 21));
        label_2 = new QLabel(addNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 84, 72, 31));
        textEdit = new QTextEdit(addNew);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 120, 231, 81));
        label_3 = new QLabel(addNew);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 215, 131, 31));
        lineEdit_2 = new QLineEdit(addNew);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 250, 113, 21));
        label_4 = new QLabel(addNew);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 369, 72, 31));
        pushButton = new QPushButton(addNew);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 360, 93, 28));
        comboBox = new QComboBox(addNew);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 400, 201, 31));
        label_5 = new QLabel(addNew);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 250, 321, 31));
        label_6 = new QLabel(addNew);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 285, 131, 31));
        lineEdit_3 = new QLineEdit(addNew);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 320, 113, 21));
        label_7 = new QLabel(addNew);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 320, 321, 31));

        retranslateUi(addNew);

        QMetaObject::connectSlotsByName(addNew);
    } // setupUi

    void retranslateUi(QDialog *addNew)
    {
        addNew->setWindowTitle(QCoreApplication::translate("addNew", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addNew", "\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("addNew", "\346\231\257\347\202\271\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("addNew", "\351\242\204\350\256\241\346\270\270\350\247\210\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("addNew", "\344\270\273\351\242\230", nullptr));
        pushButton->setText(QCoreApplication::translate("addNew", "\347\241\256\350\256\244", nullptr));
        label_5->setText(QCoreApplication::translate("addNew", "\350\276\223\345\205\245\346\227\266\351\227\264\350\214\203\345\233\264\357\274\2320<h<0.5 (\345\215\225\344\275\215\357\274\232\345\260\217\346\227\266)", nullptr));
        label_6->setText(QCoreApplication::translate("addNew", "\351\242\204\350\256\241\347\255\211\345\276\205\346\227\266\351\227\264", nullptr));
        lineEdit_3->setText(QString());
        label_7->setText(QCoreApplication::translate("addNew", "\350\276\223\345\205\245\346\227\266\351\227\264\350\214\203\345\233\264\357\274\2320<h<3 (\345\215\225\344\275\215\357\274\232\345\260\217\346\227\266)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNew: public Ui_addNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEW_H
