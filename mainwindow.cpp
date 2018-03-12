#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsmanager.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mDir()
{
    ui->setupUi(this);
    createActions();

    m_SettingsFile = QApplication::applicationDirPath() + "conf.ini";

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
    QString name = dialog->getName();
    QString dir = dialog->getDirName();
    dialog->show();
    dialog->setName(name);
    dialog->setDirName(dir);
}

void MainWindow::about()
{
    QString s = "Written by an idiot";
    qDebug("%s", qUtf8Printable(s));
}

