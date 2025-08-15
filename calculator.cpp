#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::fehler()
{
    ui->plainTextEdit_Screen->clear();
    ui->plainTextEdit_Screen->setPlainText("Fehler!");
}

void Calculator::on_button_clear_clicked()
{
    ui->plainTextEdit_Screen->clear();
}


void Calculator::on_button_1_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_1 = "1";
    stringstream ss;
    ss << actualScreen.toStdString() << number_1;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_2_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_2 = "2";
    stringstream ss;
    ss << actualScreen.toStdString() << number_2;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_3_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_3 = "3";
    stringstream ss;
    ss << actualScreen.toStdString() << number_3;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_4_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_4 = "4";
    stringstream ss;
    ss << actualScreen.toStdString() << number_4;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_5_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_5 = "5";
    stringstream ss;
    ss << actualScreen.toStdString() << number_5;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_6_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_6 = "6";
    stringstream ss;
    ss << actualScreen.toStdString() << number_6;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_7_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_7 = "7";
    stringstream ss;
    ss << actualScreen.toStdString() << number_7;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_8_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_8 = "8";
    stringstream ss;
    ss << actualScreen.toStdString() << number_8;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_9_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_9 = "9";
    stringstream ss;
    ss << actualScreen.toStdString() << number_9;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_0_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string number_0 = "0";
    stringstream ss;
    ss << actualScreen.toStdString() << number_0;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_pushButton_komma_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string komma = ".";
    stringstream ss;
    ss << actualScreen.toStdString() << komma;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_addition_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string plus = "+";
    stringstream ss;
    ss << actualScreen.toStdString() << plus;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_subtaktion_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string minus = "-";
    stringstream ss;
    ss << actualScreen.toStdString() << minus;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_multiplikation_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string mal = " * ";
    stringstream ss;
    ss << actualScreen.toStdString() << mal;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_division_clicked()
{
    QString actualScreen = ui->plainTextEdit_Screen->toPlainText();
    string durch = " / ";
    stringstream ss;
    ss << actualScreen.toStdString() << durch;
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}


void Calculator::on_button_ergebnis_clicked()
{
    QString screen = ui->plainTextEdit_Screen->toPlainText();
    if(screen.isEmpty() || screen.endsWith('+') || screen.endsWith('-')
        || screen.endsWith('*') || screen.endsWith('/')) {
        fehler();
        return;
    }

    char _operator = CalculatorEngine::sucheOperator(screen.toStdString());
    if(_operator == ' ') {
        fehler();
        return;
    }

    QStringList operands = screen.split(_operator);
    double ergebnis = CalculatorEngine::berechneErgebnis(operands[0].toDouble(), operands[1].toDouble(), _operator);
    if(std::isnan(ergebnis)) {
        fehler();
        return;
    }

    stringstream ss;
    ss << screen.toStdString() << " = " << std::to_string(ergebnis);
    ui->plainTextEdit_Screen->setPlainText(QString::fromStdString(ss.str()));
}



