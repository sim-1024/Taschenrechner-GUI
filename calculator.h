#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "calculatorengine.h"
#include <iostream>
#include <sstream>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    void fehler();

private slots:
    void on_button_clear_clicked();
    void on_button_1_clicked();
    void on_button_2_clicked();
    void on_button_3_clicked();
    void on_button_4_clicked();
    void on_button_5_clicked();
    void on_button_6_clicked();
    void on_button_7_clicked();
    void on_button_8_clicked();
    void on_button_9_clicked();
    void on_button_0_clicked();
    void on_pushButton_komma_clicked();
    void on_button_addition_clicked();
    void on_button_subtaktion_clicked();
    void on_button_multiplikation_clicked();
    void on_button_division_clicked();
    void on_button_ergebnis_clicked();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
