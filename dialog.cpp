#include "dialog.h"
#include "ui_dialog.h"
#include "tomlhandler.h"
#include "settingsmanager.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString dirName = QFileDialog::getExistingDirectory(this, "Choose a Directory to Monitor", QDir::homePath());
    Dialog::setDirName(dirName);
}

void Dialog::on_buttonBox_accepted() //TODO: Make this work lol
{
    qDebug() << "name: " << getName() << " dir " << getDirName();
    SettingsManager* set = new SettingsManager();
    set->saveProfileSettings(getName(), getDirName());

}

void Dialog::setName(const QString& name)
{
    mName = ui->nameLine->text();
}

QString &Dialog::getName()
{
    return mName;
}

void Dialog::setDirName(const QString &dir)
{
    mDirName = ui->dirLine->text();

}

QString &Dialog::getDirName()
{
    return mDirName;
}
