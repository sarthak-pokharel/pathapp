#include "AppTools.h"
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sys/types.h>

AppTools::AppTools()
{
    //ctor
}

struct stat dirinfo;
int dirExists(string path);

void saveBatchScript(string script, string filename, string execContainerDir)
{
    string exfileFullPath = execContainerDir + "\\" + filename;
    ofstream exfile;
    exfile.open(exfileFullPath);
    exfile << script << endl;
    exfile.close();
}

void checkAndAddEnvFolder(string envdir)
{
    if(dirExists(envdir)!=0) {
        return;
    }
    mkdir(envdir.c_str());
}

int dirExists(string spath)
{
    //Credit: https://stackoverflow.com/a/52043954
    const char* path = spath.c_str();
    struct stat info;

    int statRC = stat( path, &info );
    if( statRC != 0 )
    {
        if (errno == ENOENT)  { return 0; } // something along the path does not exist
        if (errno == ENOTDIR) { return 0; } // something in path prefix is not a dir
        return -1;
    }

    return ( info.st_mode & S_IFDIR ) ? 1 : 0;
}

