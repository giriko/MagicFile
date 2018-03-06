#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QDateTime>

class FileHandler
{
public:
    FileHandler();
    qint64 fileSize(QString f);
    QDateTime lastTouch(QString f);


};

#endif // FILEHANDLER_H
