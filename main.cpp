#include <iostream>

#include "BatchFileBuilder.h"
#include "CodeSetBuilder.h"
#include "AppTools.h"

using namespace std;

string execContainerDir = "C:\\Programs\\bin";
string defaultExecExtention = "bat";
string extentionSplitter = ".";

int main(int argc, char const *argv[])
{
    if(argc > 1){
        string opt = string(argv[1]);
        if(opt == "--help"
           ||
           opt == "-h") {
            cout <<
                "Argument[0] =>  Name of executable you prefer" <<
                "\n" <<
                "Argument[1] =>  Path to the executable file to put it's shortcut-shell-executable in path folder" << endl;
            return 0;
        }
    }
	if(argc < 3) {
            cout << "Please supply both two arguments" << endl;
		return 0;
	}
	string execname = argv[1];
	string exepath = argv[2];
	string execext = defaultExecExtention;
	string execnameext = execname + extentionSplitter + execext;

	BatchFileBuilder mybatchfile;
		CodeSetBuilder simpleScript;
		simpleScript.addExecutable(exepath);
		simpleScript.addCommandBlock("%*", true);
	mybatchfile.appendCodeSet(simpleScript);
	mybatchfile.createBatchFile();

	string scriptContent = mybatchfile.prepareBatchCode();

	saveBatchScript(scriptContent,execnameext,execContainerDir);
	cout << "Created " << execnameext << " in " << execContainerDir << endl;
	cout << "Contains script: \n" << scriptContent << endl;
	return 0;
}

