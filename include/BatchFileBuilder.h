#ifndef BATCHFILEBUILDER_H
#define BATCHFILEBUILDER_H

#include <iostream>
#include<list>
#include "CodeSetBuilder.h"
using namespace std;

class BatchFileBuilder
{
    public:
        BatchFileBuilder();
        string batchContent;
        list<CodeSetBuilder> codeSets;

        void appendCodeSet(CodeSetBuilder codeset);
        void createBatchFile();
        void appendBatchContent(string cBlockCont);
        string prepareBatchCode();

};

#endif // BATCHFILEBUILDER_H
