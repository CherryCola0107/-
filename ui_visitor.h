/********************************************************************************
** Form generated from reading UI file 'visitor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITOR_H
#define UI_VISITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visitor
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *visitor)
    {
        if (visitor->objectName().isEmpty())
            visitor->setObjectName(QString::fromUtf8("visitor"));
        visitor->resize(560, 413);
        visitor->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(visitor);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 60, 241, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(visitor);

        QMetaObject::connectSlotsByName(visitor);
    } // setupUi

    void retranslateUi(QDialog *visitor)
    {
        visitor->setWindowTitle(QCoreApplication::translate("visitor", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("visitor", "\346\237\245\350\257\242\344\270\273\351\242\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("visitor", "\346\237\245\350\257\242\345\221\250\345\233\264\346\231\257\347\202\271\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("visitor", "\350\267\257\347\272\277\346\216\250\350\215\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visitor: public Ui_visitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITOR_H
