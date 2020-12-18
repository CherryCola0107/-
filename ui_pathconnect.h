/********************************************************************************
** Form generated from reading UI file 'pathconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHCONNECT_H
#define UI_PATHCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pathConnect
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *line_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *line_6;
    QPushButton *pushButton;
    QComboBox *line_1;
    QComboBox *line_3;
    QComboBox *line_5;

    void setupUi(QDialog *pathConnect)
    {
        if (pathConnect->objectName().isEmpty())
            pathConnect->setObjectName(QString::fromUtf8("pathConnect"));
        pathConnect->resize(561, 424);
        label = new QLabel(pathConnect);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 72, 15));
        label_2 = new QLabel(pathConnect);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 72, 15));
        label_3 = new QLabel(pathConnect);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 72, 15));
        line_2 = new QLineEdit(pathConnect);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(30, 140, 113, 21));
        label_4 = new QLabel(pathConnect);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 40, 72, 15));
        label_5 = new QLabel(pathConnect);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 110, 72, 15));
        label_6 = new QLabel(pathConnect);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 60, 72, 15));
        line_4 = new QLineEdit(pathConnect);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(330, 140, 113, 21));
        label_7 = new QLabel(pathConnect);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 190, 72, 16));
        label_8 = new QLabel(pathConnect);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 260, 72, 15));
        label_9 = new QLabel(pathConnect);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 190, 72, 15));
        line_6 = new QLineEdit(pathConnect);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(30, 280, 113, 21));
        pushButton = new QPushButton(pathConnect);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 290, 93, 28));
        line_1 = new QComboBox(pathConnect);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(30, 80, 141, 22));
        line_3 = new QComboBox(pathConnect);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(330, 70, 141, 22));
        line_5 = new QComboBox(pathConnect);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(30, 220, 141, 22));

        retranslateUi(pathConnect);

        QMetaObject::connectSlotsByName(pathConnect);
    } // setupUi

    void retranslateUi(QDialog *pathConnect)
    {
        pathConnect->setWindowTitle(QCoreApplication::translate("pathConnect", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("pathConnect", "\346\231\257\347\202\2711", nullptr));
        label_3->setText(QCoreApplication::translate("pathConnect", "\350\267\235\347\246\273", nullptr));
        label_4->setText(QCoreApplication::translate("pathConnect", "\346\231\257\347\202\2712", nullptr));
        label_5->setText(QCoreApplication::translate("pathConnect", "\350\267\235\347\246\273", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("pathConnect", "\346\231\257\347\202\2713", nullptr));
        label_8->setText(QCoreApplication::translate("pathConnect", "\350\267\235\347\246\273", nullptr));
        label_9->setText(QString());
        pushButton->setText(QCoreApplication::translate("pathConnect", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pathConnect: public Ui_pathConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCONNECT_H
