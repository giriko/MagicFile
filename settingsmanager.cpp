#include "settingsmanager.h"

SettingsManager::SettingsManager()
{
    QCoreApplication::setOrganizationName("Gir Works");
    QCoreApplication::setApplicationName("MagicFile");
    QCoreApplication::setOrganizationDomain("giriko.github.io");
    m_SettingsFile = QApplication::applicationDirPath() + "/conf.ini";
}

void SettingsManager::saveProfileSettings(QString &name, QString &dir)
{
    QSettings settings(m_SettingsFile, QSettings::IniFormat);
    settings.setValue(name, dir);
    qDebug() << m_SettingsFile << "Written Success!";
}

void SettingsManager::loadSettings()
{
    //placeholder
}
