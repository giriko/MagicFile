#ifndef TOMLHANDLER_H
#define TOMLHANDLER_H

#include "include/toml/cpptoml.h"
#include <QFile>
#include <QDebug>

class TomlHandler
{
public:
    TomlHandler();
    void newTomlProfile(QString &name, QString &dir);
    std::string toUtf8(QString s);
    std::shared_ptr<cpptoml::table> parseFile(QString &fileName);
};

#endif // TOMLHANDLER_H
