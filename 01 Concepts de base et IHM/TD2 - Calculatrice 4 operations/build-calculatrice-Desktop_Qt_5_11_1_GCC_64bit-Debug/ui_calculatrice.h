/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatrice
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton9;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton0;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButton7;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButtonDiviser;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonMoins;
    QPushButton *pushButton3;
    QLineEdit *lineEditAfficheur;

    void setupUi(QWidget *calculatrice)
    {
        if (calculatrice->objectName().isEmpty())
            calculatrice->setObjectName(QStringLiteral("calculatrice"));
        calculatrice->resize(562, 408);
        gridLayoutWidget = new QWidget(calculatrice);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 90, 451, 221));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton9->setFont(font);

        gridLayout_3->addWidget(pushButton9, 1, 2, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setFont(font);

        gridLayout_3->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setFont(font);

        gridLayout_3->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setFont(font);

        gridLayout_3->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setFont(font);

        gridLayout_3->addWidget(pushButton6, 2, 2, 1, 1);

        pushButtonPlus = new QPushButton(gridLayoutWidget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setFont(font);

        gridLayout_3->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        pushButton0->setFont(font);

        gridLayout_3->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setFont(font);

        gridLayout_3->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setFont(font);

        gridLayout_3->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setEnabled(true);
        pushButton7->setFont(font);

        gridLayout_3->addWidget(pushButton7, 1, 0, 1, 1);

        pushButtonClear = new QPushButton(gridLayoutWidget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setFont(font);

        gridLayout_3->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButtonMultiplier = new QPushButton(gridLayoutWidget);
        pushButtonMultiplier->setObjectName(QStringLiteral("pushButtonMultiplier"));
        pushButtonMultiplier->setFont(font);

        gridLayout_3->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButtonDiviser = new QPushButton(gridLayoutWidget);
        pushButtonDiviser->setObjectName(QStringLiteral("pushButtonDiviser"));
        pushButtonDiviser->setFont(font);

        gridLayout_3->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        pushButtonEgal = new QPushButton(gridLayoutWidget);
        pushButtonEgal->setObjectName(QStringLiteral("pushButtonEgal"));
        pushButtonEgal->setEnabled(true);
        pushButtonEgal->setFont(font);

        gridLayout_3->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonMoins = new QPushButton(gridLayoutWidget);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));
        pushButtonMoins->setFont(font);

        gridLayout_3->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setFont(font);

        gridLayout_3->addWidget(pushButton3, 3, 2, 1, 1);

        lineEditAfficheur = new QLineEdit(gridLayoutWidget);
        lineEditAfficheur->setObjectName(QStringLiteral("lineEditAfficheur"));
        lineEditAfficheur->setEnabled(true);

        gridLayout_3->addWidget(lineEditAfficheur, 0, 0, 1, 4);


        retranslateUi(calculatrice);

        QMetaObject::connectSlotsByName(calculatrice);
    } // setupUi

    void retranslateUi(QWidget *calculatrice)
    {
        calculatrice->setWindowTitle(QApplication::translate("calculatrice", "calculatrice", nullptr));
        pushButton9->setText(QApplication::translate("calculatrice", "9", nullptr));
        pushButton2->setText(QApplication::translate("calculatrice", "2", nullptr));
        pushButton8->setText(QApplication::translate("calculatrice", "8", nullptr));
        pushButton5->setText(QApplication::translate("calculatrice", "5", nullptr));
        pushButton6->setText(QApplication::translate("calculatrice", "6", nullptr));
        pushButtonPlus->setText(QApplication::translate("calculatrice", "+", nullptr));
        pushButton0->setText(QApplication::translate("calculatrice", "0", nullptr));
        pushButton1->setText(QApplication::translate("calculatrice", "1", nullptr));
        pushButton4->setText(QApplication::translate("calculatrice", "4", nullptr));
        pushButton7->setText(QApplication::translate("calculatrice", "7", nullptr));
        pushButtonClear->setText(QApplication::translate("calculatrice", "C", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("calculatrice", "*", nullptr));
        pushButtonDiviser->setText(QApplication::translate("calculatrice", "/", nullptr));
        pushButtonEgal->setText(QApplication::translate("calculatrice", "=", nullptr));
        pushButtonMoins->setText(QApplication::translate("calculatrice", "-", nullptr));
        pushButton3->setText(QApplication::translate("calculatrice", "3", nullptr));
        lineEditAfficheur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class calculatrice: public Ui_calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
