/********************************************************************************
** Form generated from reading UI file 'aroundinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AROUNDINFO_H
#define UI_AROUNDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aroundINFO
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *aroundINFO)
    {
        if (aroundINFO->objectName().isEmpty())
            aroundINFO->setObjectName(QString::fromUtf8("aroundINFO"));
        aroundINFO->resize(884, 620);
        scrollArea = new QScrollArea(aroundINFO);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(356, 30, 481, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 479, 529));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(34, 10, 411, 511));
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(aroundINFO);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 281, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Adobe Arabic\";"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(aroundINFO);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(26, 370, 279, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Adobe Arabic\";"));
        comboBox = new QComboBox(aroundINFO);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 290, 331, 51));
        comboBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Adobe Arabic\";"));

        retranslateUi(aroundINFO);

        QMetaObject::connectSlotsByName(aroundINFO);
    } // setupUi

    void retranslateUi(QDialog *aroundINFO)
    {
        aroundINFO->setWindowTitle(QCoreApplication::translate("aroundINFO", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("aroundINFO", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("aroundINFO", "\350\257\267\351\200\211\346\213\251\346\202\250\345\275\223\345\211\215\347\232\204\344\275\215\347\275\256", nullptr));
        pushButton->setText(QCoreApplication::translate("aroundINFO", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aroundINFO: public Ui_aroundINFO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AROUNDINFO_H
