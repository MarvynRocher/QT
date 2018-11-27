/********************************************************************************
** Form generated from reading UI file 'imc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMC_H
#define UI_IMC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMC
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QPushButton *pushButtonSuite;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelNom;
    QSpacerItem *verticalSpacer;
    QLabel *labelPrenom;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelSexe;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelAge;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelPoids;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelTaille;
    QSpacerItem *verticalSpacer_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBoxAge;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QWidget *tab_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEditAfficheur;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonFormuleDevine;
    QPushButton *pushButtonFormuleLorentz;
    QPushButton *pushButtonFormuleLorentzAge;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;

    void setupUi(QWidget *IMC)
    {
        if (IMC->objectName().isEmpty())
            IMC->setObjectName(QStringLiteral("IMC"));
        IMC->resize(545, 466);
        IMC->setMinimumSize(QSize(545, 466));
        IMC->setMaximumSize(QSize(545, 466));
        tabWidget = new QTabWidget(IMC);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 30, 451, 391));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        radioButtonFemme = new QRadioButton(tab);
        radioButtonFemme->setObjectName(QStringLiteral("radioButtonFemme"));
        radioButtonFemme->setGeometry(QRect(90, 100, 96, 23));
        radioButtonHomme = new QRadioButton(tab);
        radioButtonHomme->setObjectName(QStringLiteral("radioButtonHomme"));
        radioButtonHomme->setGeometry(QRect(210, 100, 96, 23));
        pushButtonSuite = new QPushButton(tab);
        pushButtonSuite->setObjectName(QStringLiteral("pushButtonSuite"));
        pushButtonSuite->setGeometry(QRect(170, 290, 80, 25));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 54, 176));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelNom = new QLabel(layoutWidget);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        verticalLayout->addWidget(labelNom);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelPrenom = new QLabel(layoutWidget);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        verticalLayout->addWidget(labelPrenom);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelSexe = new QLabel(layoutWidget);
        labelSexe->setObjectName(QStringLiteral("labelSexe"));

        verticalLayout->addWidget(labelSexe);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        labelAge = new QLabel(layoutWidget);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        verticalLayout->addWidget(labelAge);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        labelPoids = new QLabel(layoutWidget);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        verticalLayout->addWidget(labelPoids);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        labelTaille = new QLabel(layoutWidget);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        verticalLayout->addWidget(labelTaille);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 130, 71, 92));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBoxAge = new QSpinBox(layoutWidget1);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        verticalLayout_2->addWidget(spinBoxAge);

        doubleSpinBoxPoids = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15);
        doubleSpinBoxPoids->setMaximum(300);
        doubleSpinBoxPoids->setSingleStep(0.1);

        verticalLayout_2->addWidget(doubleSpinBoxPoids);

        doubleSpinBoxTaille = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.5);
        doubleSpinBoxTaille->setMaximum(30);
        doubleSpinBoxTaille->setSingleStep(0.01);

        verticalLayout_2->addWidget(doubleSpinBoxTaille);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 40, 211, 58));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEditNom = new QLineEdit(layoutWidget2);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        verticalLayout_5->addWidget(lineEditNom);

        lineEditPrenom = new QLineEdit(layoutWidget2);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        verticalLayout_5->addWidget(lineEditPrenom);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 10, 298, 289));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        textEditAfficheur = new QTextEdit(layoutWidget3);
        textEditAfficheur->setObjectName(QStringLiteral("textEditAfficheur"));

        verticalLayout_4->addWidget(textEditAfficheur);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButtonFormuleDevine = new QPushButton(layoutWidget3);
        pushButtonFormuleDevine->setObjectName(QStringLiteral("pushButtonFormuleDevine"));

        verticalLayout_3->addWidget(pushButtonFormuleDevine);

        pushButtonFormuleLorentz = new QPushButton(layoutWidget3);
        pushButtonFormuleLorentz->setObjectName(QStringLiteral("pushButtonFormuleLorentz"));

        verticalLayout_3->addWidget(pushButtonFormuleLorentz);

        pushButtonFormuleLorentzAge = new QPushButton(layoutWidget3);
        pushButtonFormuleLorentzAge->setObjectName(QStringLiteral("pushButtonFormuleLorentzAge"));

        verticalLayout_3->addWidget(pushButtonFormuleLorentzAge);


        verticalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());
        pushButtonQuitter = new QPushButton(IMC);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(230, 430, 80, 25));
        layoutWidget4 = new QWidget(IMC);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(IMC);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        retranslateUi(IMC);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), IMC, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(IMC);
    } // setupUi

    void retranslateUi(QWidget *IMC)
    {
        IMC->setWindowTitle(QApplication::translate("IMC", "IMC", nullptr));
        radioButtonFemme->setText(QApplication::translate("IMC", "Femme", nullptr));
        radioButtonHomme->setText(QApplication::translate("IMC", "Homme", nullptr));
        pushButtonSuite->setText(QApplication::translate("IMC", "Suite", nullptr));
        labelNom->setText(QApplication::translate("IMC", "Nom", nullptr));
        labelPrenom->setText(QApplication::translate("IMC", "Pr\303\251nom", nullptr));
        labelSexe->setText(QApplication::translate("IMC", "Sexe", nullptr));
        labelAge->setText(QApplication::translate("IMC", "Age", nullptr));
        labelPoids->setText(QApplication::translate("IMC", "Poids(kg)", nullptr));
        labelTaille->setText(QApplication::translate("IMC", "Taille(m)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("IMC", "Informations personnelles", nullptr));
        pushButtonFormuleDevine->setText(QApplication::translate("IMC", "Poids id\303\251al formule de Devine", nullptr));
        pushButtonFormuleLorentz->setText(QApplication::translate("IMC", "Poids id\303\251al formule de Lorentz", nullptr));
        pushButtonFormuleLorentzAge->setText(QApplication::translate("IMC", "Poids id\303\251al formule de Lorentz en fonction de l'\303\242ge", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("IMC", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("IMC", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMC: public Ui_IMC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMC_H
