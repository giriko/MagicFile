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

QStringList SettingsManager::loadSettings()
{
    QSettings settings (m_SettingsFile, QSettings::IniFormat);
    return settings.allKeys();

}

void SettingsManager::copySettings(QSettings &src, QSettings &dest)
{
    QStringList keys = src.allKeys();
    for (QStringList:: iterator it = keys.begin(); it != keys.end(); it++)
    {
        dest.setValue(*it, src.value(*it));
    }
}
