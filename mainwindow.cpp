#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mDir()
{
    ui->setupUi(this);
    createActions();

    m_SettingsFile = QApplication::applicationDirPath().left(1) + "conf.ini";
    loadSettings();
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

    saveSettings(dialog);
}

void MainWindow::about()
{
    QString s = "Written by an idiot";
    qDebug("%s", qUtf8Printable(s));
}

void MainWindow::saveSettings(Dialog *dialog)
{
    QSettings settings(m_SettingsFile, QSettings::IniFormat);
    QString name = dialog->getName();
    QString dir = dialog->getDirName();


}

void MainWindow::loadSettings()
{
    //placeholder
}
