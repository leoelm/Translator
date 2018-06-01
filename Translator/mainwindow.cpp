#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "translate_hex.h"
#include "tolower.h"
#include "translate_bi.h"
#include "translate_sponge.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList trans_types ={"Hex", "Binary", "SpOnGeBoB"};
    ui->comboBox->addItems(trans_types);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_translate_released()
{
    if(ui->comboBox->currentText()=="Hex"){
    TRANSLATE_HEX new_hex;
    TOLOWER new_lower;
    QString Input;

    Input = ui->textEdit_in->toPlainText();

    new_lower.tolower(Input);
    new_hex.to_hex(new_lower.lower_out);

    ui->lineEdit_out->setText(new_hex.output_hex);
    }
    else if(ui->comboBox->currentText()=="Binary"){
    TRANSLATE_BI new_bi;
    TOLOWER new_lower;
    QString Input;

    Input = ui->textEdit_in->toPlainText();

    new_lower.tolower(Input);
    new_bi.to_bi(new_lower.lower_out);

    ui->lineEdit_out->setText(new_bi.output_bi);
    }
    else if(ui->comboBox->currentText()=="SpOnGeBoB"){
    TRANSLATE_SPONGE new_sponge;
    TOLOWER new_lower;
    QString Input;

    Input = ui->textEdit_in->toPlainText();

    new_lower.tolower(Input);
    new_sponge.to_sponge(new_lower.lower_out);

    ui->lineEdit_out->setText(new_sponge.output_sponge);
    }
}
