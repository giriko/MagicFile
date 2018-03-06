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
    connect(this, SIGNAL(triggered(QAction*)), this, SLOT(about()));
}

void MainWindow::newProfile()
{
    /* QFileDialog::getOpenFileName(
                this,
                "Choose Directory",
                QDir::currentPath(),"*.*","*.*",
                QFileDialog::ShowDirsOnly); */
    QFileDialog::getOpenFileName(this, "Choose Directory", QDir::currentPath(), "*.*");
}

void MainWindow::about()
{
    QString s = "Written by an idiot";
    qDebug(qUtf8Printable(s));
}
