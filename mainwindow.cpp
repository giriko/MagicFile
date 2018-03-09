#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mDir()
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
    static Dialog* dialog = new Dialog(this);
    bool ok;
    QString name = dialog->getName();
    dialog->show();
    mDir.append(name);
}

void MainWindow::about()
{
    QString s = "Written by an idiot";
    qDebug("%s", qUtf8Printable(s));
}


