#include "dialog.h"
#include "ui_dialog.h"

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
    if(!ui->nameLine->text().isEmpty() && !ui->dirLine->text().isEmpty())
    {
        QFile file("./conf.csv");
        if(file.open(QFile::WriteOnly|QFile::Truncate))
        {
            QTextStream stream(&file);
            stream << getName() << "," <<getDirName();
        }
    }

}

void Dialog::setName(const QString& name)
{
    mName = ui->nameLine->setText(name);
}

QString Dialog::getName()
{
    QString name = ui->nameLine->text();
    return name;
}

void Dialog::setDirName(const QString &dir)
{
    mDirName =  ui->dirLine->setText(dir);

}

QString Dialog::getDirName()
{
    QString dirName = ui->dirLine->text();
    return dirName;
}
