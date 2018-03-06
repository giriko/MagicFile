#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions()
{
    QSignalMapper *pSignalMapper = new QSignalMapper(this);
    connect(ui->menuFileMagic, SIGNAL(triggered(QAction*)), this, SLOT(newProfile()));
    connect(ui->menuFileMagic, SIGNAL(triggered(QAction*)), this, SLOT(about()));
}

void MainWindow::newProfile()
{
    Dialog *profileDialog = new Dialog(this);
    profileDialog->show();
}

void MainWindow::about()
{
    QString s = "Written by an idiot";
    qDebug("%s", qUtf8Printable(s));
}
