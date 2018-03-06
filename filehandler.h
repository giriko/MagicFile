#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <string>
#include <vector>
#include <boost/filesystem.hpp>

using namespace boost::filesystem;
class FileHandler
{
public:
    FileHandler();
    std::vector<path> getFileList(path p);
};

#endif // FILEHANDLER_H
