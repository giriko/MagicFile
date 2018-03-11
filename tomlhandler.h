#ifndef TOMLHANDLER_H
#define TOMLHANDLER_H

#include "include/toml/cpptoml.h"
#include <QFile>

class TomlHandler
{
public:
    TomlHandler();
    void newTomlProfile(QString &name, QString &dir);
    std::string toUtf8(QString s);
};

#endif // TOMLHANDLER_H
