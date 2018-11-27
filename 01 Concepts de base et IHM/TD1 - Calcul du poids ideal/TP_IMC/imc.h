#ifndef IMC_H
#define IMC_H

#include <QWidget>

namespace Ui {
class IMC;
}

class IMC : public QWidget
{
    Q_OBJECT

public:
    explicit IMC(QWidget *parent = nullptr);
    ~IMC();

private slots:
    void on_pushButtonQuitter_clicked();

    void on_pushButtonSuite_clicked();

    void on_pushButtonFormuleDevine_clicked();

    void on_pushButtonFormuleLorentz_clicked();

    void on_pushButtonFormuleLorentzAge_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::IMC *ui;

     double poids;
     double taille;
     QString nom;
     QString prenom;
     int age;
     static const int NBIMC=6;
     static const int NBCORPULENCE=7;

     void afficherInfos();
     QString DeterminerClassification(double imc);
     void Devine();
    void Lorentz();
     void LorentzAge();
};


#endif // IMC_H
