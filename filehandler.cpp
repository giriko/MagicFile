/*
#include "filehandler.h"
#include "boost/filesystem.hpp"
#include <iostream>
using namespace boost::filesystem;
FileHandler::FileHandler()
{

}

std::vector<path> FileHandler::getFileList(path p)
{
    std::vector<std::string> list;
    try
    {
        if (exists(p))
        {
            list.push_back(p);
        }
    } catch (const filesystem_error& ex) {
        std::cout << ex.what() << std::endl;
    }
    return list;
}
*/
