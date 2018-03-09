#ifndef DIALOG_H
#define DIALOG_H

#include <QInputDialog>
#include <QFileDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void setName(const QString& name);
    QString getName();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
