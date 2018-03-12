#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QSettings>
#include <QCoreApplication>
#include <QApplication>
#include "common.h"

class SettingsManager : public QSettings
{
public:
    SettingsManager();
    void saveProfileSettings(QString &name, QString &dir);
    QStringList loadSettings();
    void copySettings(QSettings &src, QSettings &dest);

private:
    QString m_SettingsFile;
};

#endif // SETTINGSMANAGER_H
