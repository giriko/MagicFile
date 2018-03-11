#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QSettings>
#include <QCoreApplication>
#include <QApplication>

class SettingsManager : public QSettings
{
public:
    SettingsManager();
    void saveProfileSettings(QString &name, QString &dir);
    void loadSettings();

private:
    QString m_SettingsFile;
};

#endif // SETTINGSMANAGER_H
