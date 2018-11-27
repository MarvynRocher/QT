/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJava;
    QAction *actionCPlusPlus;
    QAction *actionPHP;
    QAction *actionJavascript;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelChoix;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxChoixOS;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    QTextEdit *textEdit;
    QLabel *labelEvenement;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxOSXLion;
    QCheckBox *checkBoxLinux;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonOSXLion;
    QRadioButton *radioButtonLinux;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonOSXLion;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QMenu *menuLangages;
    QMenu *menuWeb;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(354, 453);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QStringLiteral("actionC"));
        actionJava = new QAction(MainWindow);
        actionJava->setObjectName(QStringLiteral("actionJava"));
        actionCPlusPlus = new QAction(MainWindow);
        actionCPlusPlus->setObjectName(QStringLiteral("actionCPlusPlus"));
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QStringLiteral("actionPHP"));
        actionJavascript = new QAction(MainWindow);
        actionJavascript->setObjectName(QStringLiteral("actionJavascript"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 70, 171, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelChoix = new QLabel(layoutWidget);
        labelChoix->setObjectName(QStringLiteral("labelChoix"));

        horizontalLayout->addWidget(labelChoix);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBoxChoixOS = new QComboBox(layoutWidget);
        comboBoxChoixOS->addItem(QString());
        comboBoxChoixOS->addItem(QString());
        comboBoxChoixOS->addItem(QString());
        comboBoxChoixOS->setObjectName(QStringLiteral("comboBoxChoixOS"));

        horizontalLayout->addWidget(comboBoxChoixOS);


        horizontalLayout_2->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 30, 261, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelCode = new QLabel(layoutWidget1);
        labelCode->setObjectName(QStringLiteral("labelCode"));

        horizontalLayout_6->addWidget(labelCode);

        lineEditCode = new QLineEdit(layoutWidget1);
        lineEditCode->setObjectName(QStringLiteral("lineEditCode"));
        lineEditCode->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        horizontalLayout_6->addWidget(lineEditCode);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 270, 256, 121));
        textEdit->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        labelEvenement = new QLabel(centralWidget);
        labelEvenement->setObjectName(QStringLiteral("labelEvenement"));
        labelEvenement->setGeometry(QRect(50, 250, 71, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 110, 258, 141));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBoxWindows = new QCheckBox(widget);
        checkBoxWindows->setObjectName(QStringLiteral("checkBoxWindows"));

        horizontalLayout_3->addWidget(checkBoxWindows);

        checkBoxOSXLion = new QCheckBox(widget);
        checkBoxOSXLion->setObjectName(QStringLiteral("checkBoxOSXLion"));

        horizontalLayout_3->addWidget(checkBoxOSXLion);

        checkBoxLinux = new QCheckBox(widget);
        checkBoxLinux->setObjectName(QStringLiteral("checkBoxLinux"));

        horizontalLayout_3->addWidget(checkBoxLinux);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButtonWindows = new QRadioButton(widget);
        radioButtonWindows->setObjectName(QStringLiteral("radioButtonWindows"));

        horizontalLayout_4->addWidget(radioButtonWindows);

        radioButtonOSXLion = new QRadioButton(widget);
        radioButtonOSXLion->setObjectName(QStringLiteral("radioButtonOSXLion"));

        horizontalLayout_4->addWidget(radioButtonOSXLion);

        radioButtonLinux = new QRadioButton(widget);
        radioButtonLinux->setObjectName(QStringLiteral("radioButtonLinux"));

        horizontalLayout_4->addWidget(radioButtonLinux);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonLinux = new QPushButton(widget);
        pushButtonLinux->setObjectName(QStringLiteral("pushButtonLinux"));

        horizontalLayout_5->addWidget(pushButtonLinux);

        pushButtonWindows = new QPushButton(widget);
        pushButtonWindows->setObjectName(QStringLiteral("pushButtonWindows"));

        horizontalLayout_5->addWidget(pushButtonWindows);

        pushButtonOSXLion = new QPushButton(widget);
        pushButtonOSXLion->setObjectName(QStringLiteral("pushButtonOSXLion"));

        horizontalLayout_5->addWidget(pushButtonOSXLion);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(253, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));

        horizontalLayout_7->addWidget(pushButtonQuitter);


        verticalLayout_3->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 354, 22));
        menuLangages = new QMenu(menuBar);
        menuLangages->setObjectName(QStringLiteral("menuLangages"));
        menuWeb = new QMenu(menuLangages);
        menuWeb->setObjectName(QStringLiteral("menuWeb"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLangages->menuAction());
        menuLangages->addAction(actionC);
        menuLangages->addSeparator();
        menuLangages->addAction(actionJava);
        menuLangages->addAction(actionCPlusPlus);
        menuLangages->addSeparator();
        menuLangages->addAction(menuWeb->menuAction());
        menuWeb->addAction(actionPHP);
        menuWeb->addAction(actionJavascript);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionJava->setText(QApplication::translate("MainWindow", "Java", nullptr));
        actionCPlusPlus->setText(QApplication::translate("MainWindow", "C++", nullptr));
        actionPHP->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        actionJavascript->setText(QApplication::translate("MainWindow", "Javascript", nullptr));
        labelChoix->setText(QApplication::translate("MainWindow", "Choix", nullptr));
        comboBoxChoixOS->setItemText(0, QApplication::translate("MainWindow", "Linux", nullptr));
        comboBoxChoixOS->setItemText(1, QApplication::translate("MainWindow", "Windows", nullptr));
        comboBoxChoixOS->setItemText(2, QApplication::translate("MainWindow", "OS X Lion", nullptr));

        labelCode->setText(QApplication::translate("MainWindow", "Entrez votre code ", nullptr));
        labelEvenement->setText(QApplication::translate("MainWindow", "\303\211v\303\250nement", nullptr));
        checkBoxWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        checkBoxOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        checkBoxLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        radioButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        radioButtonOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        pushButtonOSXLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        menuLangages->setTitle(QApplication::translate("MainWindow", "Langages", nullptr));
        menuWeb->setTitle(QApplication::translate("MainWindow", "Web", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
