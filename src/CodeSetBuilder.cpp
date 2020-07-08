#include "CodeSetBuilder.h"
#include <iostream>
using namespace std;

CodeSetBuilder::CodeSetBuilder()
{
    codeset = "";
    //ctor
}
void CodeSetBuilder::addCommandBlock(string codeblock)
{
    addCommandBlock(codeblock, false);
}
void CodeSetBuilder::addCommandBlock(string codeblock, bool last)
{
    if(codeblock.find(' ') != string::npos) {
        codeblock = "\"" + codeblock + "\"";
    }
    codeset += codeblock;
    if(last != true) {
        codeset += " ";
    }
}
void CodeSetBuilder::addExecutable(string exepath)
{
    addExecutable(exepath, true);
}
void CodeSetBuilder::addExecutable(string exepath, bool silent)
{
    executablepath = exepath;
    if(silent == true) {
        addCommandBlock("@CALL");
    }
    addCommandBlock(executablepath);
}
string CodeSetBuilder::prepareCode()
{
    return codeset;
}
