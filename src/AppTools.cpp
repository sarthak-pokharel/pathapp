#include "AppTools.h"
#include <fstream>

AppTools::AppTools()
{
    //ctor
}
void saveBatchScript(string script, string filename, string execContainerDir)
{
    string exfileFullPath = execContainerDir + "\\" + filename;
    ofstream exfile;
    exfile.open(exfileFullPath);
    exfile << script << endl;
    exfile.close();
}
