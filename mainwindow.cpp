#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./common/network.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Network *n = new Network;
    n->create();
}

MainWindow::~MainWindow()
{
    delete ui;
}

