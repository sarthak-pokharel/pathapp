#include "BatchFileBuilder.h"

#include <iostream>
#include<list>
using namespace std;

BatchFileBuilder::BatchFileBuilder()
{
    //ctor
}

void BatchFileBuilder::appendCodeSet(CodeSetBuilder codeset)
{
    codeSets.push_back(codeset);
}
void BatchFileBuilder::createBatchFile()
{
    batchContent = "";
    list <CodeSetBuilder>::iterator it;
    for(it = codeSets.begin(); it != codeSets.end(); it++) {
        appendBatchContent(it->prepareCode());
    }
}
void BatchFileBuilder::appendBatchContent(string cBlockCont)
{
    batchContent += "\n";
    batchContent += cBlockCont;
}
string BatchFileBuilder::prepareBatchCode()
{
    return batchContent;
}

