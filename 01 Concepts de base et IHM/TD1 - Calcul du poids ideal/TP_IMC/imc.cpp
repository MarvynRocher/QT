#include "imc.h"
#include "ui_imc.h"

IMC::IMC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IMC)
{
    ui->setupUi(this);
}

IMC::~IMC()
{
    delete ui;
}

void IMC::on_pushButtonQuitter_clicked()
{

}

void IMC::on_pushButtonSuite_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->widget(1)->setVisible(true);
    afficherInfos();
}

void IMC::on_pushButtonFormuleDevine_clicked()
{
    Devine();
}

void IMC::on_pushButtonFormuleLorentz_clicked()
{
    Lorentz();
}

void IMC::on_pushButtonFormuleLorentzAge_clicked()
{
    LorentzAge();
}


void IMC::afficherInfos(){

    //initialisation du nom, prénom, de l'âge, du poids et de la taille
    nom = ui->lineEditNom->text();
    prenom = ui->lineEditPrenom->text();
    age = ui ->spinBoxAge->value();
    poids=ui->doubleSpinBoxPoids->value();
    taille=ui->doubleSpinBoxTaille->value();

    double imc = poids/ (taille*taille);

    //affichage du message de bienvenue
    ui->textEditAfficheur->setText("Bienvenue <b>"+prenom+ " "+nom+"</b>");
    ui->textEditAfficheur->append("Votre indice de masse corporelle est : <b>" + QString::number(imc,'f',1));
    ui->textEditAfficheur->append("Votre corpurlence est qualifiée de : <b>" + DeterminerClassification(imc)+ "</b>");

}

QString IMC::DeterminerClassification(double imc)
{
    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < imcs[0]) {
        indiceCorpulence = 0;
    }
    if (imc > imcs[NBIMC-1]) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]

    return corpulences[indiceCorpulence];
}

void IMC::Devine()
{
    double poidsIdeal=0;
    if(ui->radioButtonFemme->isChecked()){
        poidsIdeal=45.5+2.3+(taille/0.0254-60.0);
    }
    if(ui->radioButtonHomme->isChecked()){
        poidsIdeal=50+2.3*(taille/0.0254-60.0);
    }

    if(poidsIdeal>0){
        ui->textEditAfficheur->append("Votre poids idéal selon la formule de Devine est " + QString::number(poidsIdeal,'f',1)+"kg");
        double ecart=poids-poidsIdeal;
        if(ecart>0){
            ui->textEditAfficheur->append("Vous devez perdre "+ QString::number(ecart,'f',1)+"kg");
        }
        else {
            ui->textEditAfficheur->append("Vous devez prendre "+QString::number(-ecart,'f',1)+"kg");
        }
    }
}

void IMC::Lorentz()
{
    double poidsIdeal=0;
    if(ui->radioButtonFemme->isChecked()){
        poidsIdeal=taille*100-100-(taille*100-150)/2.5;
    }
    if(ui->radioButtonHomme->isChecked()){
        poidsIdeal=taille*100-100-(taille*100-150)/4;
    }

    if(poidsIdeal>0){
        ui->textEditAfficheur->append("Votre poids idéal selon la formule de Lorentz est " + QString::number(poidsIdeal,'f',1)+"kg");
        double ecart=poids-poidsIdeal;
        if(ecart>0){
            ui->textEditAfficheur->append("Vous devez perdre <b>"+ QString::number(ecart,'f',1)+"kg </b>");
        }
        else {
            ui->textEditAfficheur->append("Vous devez prendre <b> "+QString::number(-ecart,'f',1)+"kg </b>");
        }
    }
}


void IMC::LorentzAge(){
     double poidsIdeal=0;

     poidsIdeal=50+(taille*100-150)/4 + (age-20)/4;
     if(poidsIdeal>0){
             ui->textEditAfficheur->append("Votre poids idéal selon la formule de Lorentz en prenant en compte l'âge est <b>" + QString::number(poidsIdeal,'f',1)+"kg </b>");
             double ecart=poids-poidsIdeal;
             if(ecart>0){
                 ui->textEditAfficheur->append("Vous devez perdre "+ QString::number(ecart,'f',1)+"kg");
             }
             else {
                 ui->textEditAfficheur->append("Vous devez prendre "+QString::number(-ecart,'f',1)+"kg");
             }
         }
}


void IMC::on_tabWidget_currentChanged(int index)
{
    if(index==1){
                afficherInfos();
    }

}
