/********************************************************************************
** Form generated from reading UI file 'themesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMESEARCH_H
#define UI_THEMESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_themeSearch
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *themeSearch)
    {
        if (themeSearch->objectName().isEmpty())
            themeSearch->setObjectName(QString::fromUtf8("themeSearch"));
        themeSearch->resize(794, 513);
        label = new QLabel(themeSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(324, 20, 121, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Adobe Arabic\";"));
        pushButton = new QPushButton(themeSearch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(261, 70, 71, 71));
        pushButton_2 = new QPushButton(themeSearch);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(432, 70, 71, 71));
        pushButton_3 = new QPushButton(themeSearch);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(346, 70, 71, 71));
        pushButton_4 = new QPushButton(themeSearch);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(516, 70, 71, 71));
        pushButton_5 = new QPushButton(themeSearch);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(176, 70, 71, 71));
        pushButton_6 = new QPushButton(themeSearch);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(281, 160, 201, 61));
        scrollArea = new QScrollArea(themeSearch);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(40, 230, 711, 261));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 259));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(themeSearch);

        QMetaObject::connectSlotsByName(themeSearch);
    } // setupUi

    void retranslateUi(QDialog *themeSearch)
    {
        themeSearch->setWindowTitle(QCoreApplication::translate("themeSearch", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("themeSearch", "\350\257\267\351\200\211\346\213\251\344\270\273\351\242\230", nullptr));
        pushButton->setText(QCoreApplication::translate("themeSearch", "\346\230\216\346\227\245\344\270\226\347\225\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("themeSearch", "\346\242\246\345\271\273\344\270\226\347\225\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("themeSearch", "\345\245\207\346\203\263\350\212\261\345\233\255", nullptr));
        pushButton_4->setText(QCoreApplication::translate("themeSearch", "\346\216\242\351\231\251\345\262\233", nullptr));
        pushButton_5->setText(QCoreApplication::translate("themeSearch", "\345\256\235\350\227\217\346\271\276", nullptr));
        pushButton_6->setText(QCoreApplication::translate("themeSearch", "\350\277\252\345\243\253\345\260\274\302\267\347\232\256\345\205\213\346\226\257\347\216\251\345\205\267\346\200\273\345\212\250\345\221\230", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("themeSearch", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class themeSearch: public Ui_themeSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMESEARCH_H
