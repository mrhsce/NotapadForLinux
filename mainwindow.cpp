#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
    ui->plainTextEdit->undo();
    
}

MainWindow::~MainWindow()
{
    delete ui;
}
