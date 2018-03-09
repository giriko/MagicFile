#ifndef DIALOG_H
#define DIALOG_H

#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QTextStream>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void setName(const QString &name);
    void setDirName(const QString &dir);
    QString getName();
    QString getDirName();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
    QString mDirName;
    QString mName;

};

#endif // DIALOG_H
