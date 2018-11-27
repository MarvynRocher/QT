#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>

namespace Ui {
class Calculatrice;
}

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    explicit Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private:
    Ui::Calculatrice *ui;

private slots:
    void on_pushButtonClear_clicked();
    void on_pushButtonEgal_clicked();
    void onQPushButtonClicked();
};

#endif // CALCULATRICE_H
