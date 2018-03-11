#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSignalMapper>
#include <QFileDialog>
#include <QDebug>
#include "dialog.h"
#include <QVector>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void loadSettings();
    void saveSettings(Dialog *dialog);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVector<QString> mDir;
    QString m_SettingsFile;


private slots:
    void newProfile();
    void about();
    void createActions();
};


#endif // MAINWINDOW_H
