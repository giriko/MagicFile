#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QSettings>
#include <QCoreApplication>

class SettingsManager : public QSettings
{
public:
    SettingsManager();
};

#endif // SETTINGSMANAGER_H
