#include "filehandler.h"

FileHandler::FileHandler()
{

}

qint64 FileHandler::fileSize(QString f)
{
    if(!QFile(f).exists()) {
        qWarning("The file doesn't exist!");
        return 1;
    }
    QFileInfo fileinfo(f);
    return fileinfo.size();
}

QDateTime FileHandler::lastTouch(QString f)
{
    QFileInfo filename(f);
    return filename.lastRead();
}
