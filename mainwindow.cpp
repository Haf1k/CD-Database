#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QLineEdit*> trackList = this->findChildren<QLineEdit*>(QRegularExpression("trackListLineEdit_\\d+$"));
    for(int i = 1; i < trackList.count(); i++){
        trackList[i]->hide();
    }

    ui->numberOfTracksSpinBox->setValue(1);
    ui->numberOfTracksSpinBox->setMinimum(1);
    ui->numberOfTracksSpinBox->setMaximum(20);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_numberOfTracksSpinBox_valueChanged(int arg1)
{
    QLineEdit *lines[] = {ui->trackListLineEdit_1, ui->trackListLineEdit_2, ui->trackListLineEdit_3, ui->trackListLineEdit_4,
                          ui->trackListLineEdit_5, ui->trackListLineEdit_6, ui->trackListLineEdit_7, ui->trackListLineEdit_8,
                          ui->trackListLineEdit_9, ui->trackListLineEdit_10, ui->trackListLineEdit_11, ui->trackListLineEdit_12,
                          ui->trackListLineEdit_13, ui->trackListLineEdit_14, ui->trackListLineEdit_15, ui->trackListLineEdit_16,
                          ui->trackListLineEdit_17, ui->trackListLineEdit_18, ui->trackListLineEdit_19, ui->trackListLineEdit_20};
    if(shownLines-arg1 < 0){
        lines[arg1-1]->show();
        shownLines = arg1;
    }
    else{
        lines[arg1]->hide();
        shownLines = arg1;
        }

    }


    //lines[arg1]->hide();



