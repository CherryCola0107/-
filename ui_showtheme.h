/********************************************************************************
** Form generated from reading UI file 'showtheme.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTHEME_H
#define UI_SHOWTHEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_showTheme
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *showTheme)
    {
        if (showTheme->objectName().isEmpty())
            showTheme->setObjectName(QString::fromUtf8("showTheme"));
        showTheme->resize(605, 422);
        textBrowser = new QTextBrowser(showTheme);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(180, 90, 256, 192));

        retranslateUi(showTheme);

        QMetaObject::connectSlotsByName(showTheme);
    } // setupUi

    void retranslateUi(QDialog *showTheme)
    {
        showTheme->setWindowTitle(QCoreApplication::translate("showTheme", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showTheme: public Ui_showTheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTHEME_H
