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
    QFileDialog::getExistingDirectory(this, "Choose a Directory to Monitor", QDir::homePath());
}

void Dialog::on_buttonBox_accepted() //TODO: Make this work lol
{
    if (ui->nameLine->text().isEmpty()) {
        ui->buttonBox->setEnabled(false);
    } else {
        ui->buttonBox->setEnabled(true);
    }

}

void Dialog::setName(const QString& name)
{
    // ui->tableWidget->setText(name);
}

QString Dialog::getName()
{
    QString name = ui->nameLine->text();
    return name;
}
