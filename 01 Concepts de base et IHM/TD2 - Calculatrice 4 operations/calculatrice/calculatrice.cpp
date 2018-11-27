#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QScriptEngine>
#include <QString>

calculatrice::calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculatrice)
{
    ui->setupUi(this);
}

calculatrice::~calculatrice()
{
    delete ui;
}

void calculatrice::on_pushButton7_clicked()
{
   ui->lineEditAfficheur->insert("7");
}

void calculatrice::on_pushButton8_clicked()
{
    ui->lineEditAfficheur->insert("8");
}

void calculatrice::on_pushButton9_clicked()
{
    ui->lineEditAfficheur->insert("9");
}

void calculatrice::on_pushButtonPlus_clicked()
{
 ui->lineEditAfficheur->insert("+");
}

void calculatrice::on_pushButton4_clicked()
{
 ui->lineEditAfficheur->insert("4");
}

void calculatrice::on_pushButton5_clicked()
{
ui->lineEditAfficheur->insert("5");
}

void calculatrice::on_pushButton6_clicked()
{
ui->lineEditAfficheur->insert("6");
}

void calculatrice::on_pushButtonMoins_clicked()
{
ui->lineEditAfficheur->insert("-");
}

void calculatrice::on_pushButton1_clicked()
{
ui->lineEditAfficheur->insert("1");
}

void calculatrice::on_pushButton2_clicked()
{
ui->lineEditAfficheur->insert("2");
}

void calculatrice::on_pushButton3_clicked()
{
ui->lineEditAfficheur->insert("3");
}

void calculatrice::on_pushButtonMultiplier_clicked()
{
ui->lineEditAfficheur->insert("*");
}

void calculatrice::on_pushButton0_clicked()
{
ui->lineEditAfficheur->insert("0");
}

void calculatrice::on_pushButtonDiviser_clicked()
{
ui->lineEditAfficheur->insert("/");
}

void calculatrice::on_pushButtonEgal_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
         QScriptEngine engine;
         QScriptValue valeur = engine.evaluate(expression);
         QString resultat = valeur.toString();
         ui->lineEditAfficheur->setText(resultat);
}

void calculatrice::on_pushButtonClear_clicked()
{
     ui->lineEditAfficheur->insert(" ");
}
