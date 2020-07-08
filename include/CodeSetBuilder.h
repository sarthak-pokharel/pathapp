#ifndef CODESETBUILDER_H
#define CODESETBUILDER_H

#include<iostream>
using namespace std;

class CodeSetBuilder
{
    public:
        string codeset;
        string executablepath;
        CodeSetBuilder();
        void addCommandBlock(string);
        void addCommandBlock(string,bool);
        void addExecutable(string);
        void addExecutable(string,bool);
        string prepareCode();

    protected:

    private:
};

#endif // CODESETBUILDER_H
