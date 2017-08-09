/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloworld
{
public:
    QPushButton *ButtonChange;
    QPushButton *ButtonClear;
    QLineEdit *EditInput;
    QLineEdit *EditOutput;
    QLabel *label1;
    QLabel *label2;
    QFrame *line;
    QLabel *labelAuthor;
    QLabel *labelStatus;
    QPushButton *ButtonReChange;
    QPushButton *ButtonQuit;

    void setupUi(QWidget *helloworld)
    {
        if (helloworld->objectName().isEmpty())
            helloworld->setObjectName(QStringLiteral("helloworld"));
        helloworld->resize(300, 300);
        ButtonChange = new QPushButton(helloworld);
        ButtonChange->setObjectName(QStringLiteral("ButtonChange"));
        ButtonChange->setGeometry(QRect(10, 200, 80, 40));
        ButtonChange->setCheckable(true);
        ButtonChange->setAutoDefault(true);
        ButtonClear = new QPushButton(helloworld);
        ButtonClear->setObjectName(QStringLiteral("ButtonClear"));
        ButtonClear->setEnabled(true);
        ButtonClear->setGeometry(QRect(210, 200, 80, 40));
        ButtonClear->setAutoDefault(true);
        ButtonClear->setFlat(false);
        EditInput = new QLineEdit(helloworld);
        EditInput->setObjectName(QStringLiteral("EditInput"));
        EditInput->setGeometry(QRect(70, 50, 160, 20));
        EditOutput = new QLineEdit(helloworld);
        EditOutput->setObjectName(QStringLiteral("EditOutput"));
        EditOutput->setGeometry(QRect(70, 100, 160, 20));
        label1 = new QLabel(helloworld);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(70, 20, 160, 20));
        label2 = new QLabel(helloworld);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(70, 80, 160, 20));
        line = new QFrame(helloworld);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 130, 300, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        labelAuthor = new QLabel(helloworld);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(200, 280, 100, 20));
        labelStatus = new QLabel(helloworld);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setGeometry(QRect(110, 160, 80, 20));
        ButtonReChange = new QPushButton(helloworld);
        ButtonReChange->setObjectName(QStringLiteral("ButtonReChange"));
        ButtonReChange->setGeometry(QRect(110, 200, 80, 40));
        ButtonQuit = new QPushButton(helloworld);
        ButtonQuit->setObjectName(QStringLiteral("ButtonQuit"));
        ButtonQuit->setGeometry(QRect(10, 250, 80, 40));
        QWidget::setTabOrder(EditInput, EditOutput);
        QWidget::setTabOrder(EditOutput, ButtonChange);
        QWidget::setTabOrder(ButtonChange, ButtonClear);

        retranslateUi(helloworld);

        ButtonChange->setDefault(false);
        ButtonClear->setDefault(false);


        QMetaObject::connectSlotsByName(helloworld);
    } // setupUi

    void retranslateUi(QWidget *helloworld)
    {
        helloworld->setWindowTitle(QApplication::translate("helloworld", "helloworld", 0));
        ButtonChange->setText(QApplication::translate("helloworld", "\347\274\226\347\240\201", 0));
        ButtonClear->setText(QApplication::translate("helloworld", "\346\270\205\351\231\244", 0));
        label1->setText(QApplication::translate("helloworld", "\345\276\205\347\274\226\347\240\201/\350\247\243\347\240\201\345\255\227\347\254\246\344\270\262", 0));
        label2->setText(QApplication::translate("helloworld", "\347\274\226\347\240\201/\350\247\243\347\240\201\345\220\216\345\255\227\347\254\246\344\270\262", 0));
        labelAuthor->setText(QApplication::translate("helloworld", "Code by DarkBlue", 0));
        labelStatus->setText(QString());
        ButtonReChange->setText(QApplication::translate("helloworld", "\350\247\243\347\240\201", 0));
        ButtonQuit->setText(QApplication::translate("helloworld", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class helloworld: public Ui_helloworld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
