#include "tomlhandler.h"

TomlHandler::TomlHandler()
{

}

void TomlHandler::newTomlProfile(QString& name, QString& dir)
{
    std::string uname = TomlHandler::toUtf8(name);
    std::string udir = TomlHandler::toUtf8(dir);
    QString conf = ".local/MagicFile"; //Dumby
    if(!QFile(conf).exists()) {
        std::shared_ptr<cpptoml::table> root = cpptoml::make_table();
        auto table = cpptoml::make_table();
        table->insert("directory", udir);

        root->insert(uname, table);
    } else {
        auto table = cpptoml::make_table();
        table->insert("directory", udir);

        root->insert(uname, table);
    }
}

std::string TomlHandler::toUtf8(QString s)
{
    return s.toStdString();
}

std::string* TomlHandler::parseFile(QString &fileName)
{
    try {
        std::string ufile = fileName.toStdString();
        std::shared_ptr<cpptoml::table> str = cpptoml::parse_file(ufile);
        return str;
    } catch (const cpptoml::parse_exception& e){
        qDebug("Failed to Parse %s : %s", fileName.toStdString(), e.what() );
    }
}
