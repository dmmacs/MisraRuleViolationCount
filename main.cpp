#include <QCoreApplication>

#include "ProcessArgs.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

//    /printf("");

    int retVal = 0;// = ProcessArgs();//argc, argv);

    ProcessArgs(argc, argv);
    //return a.exec();

    return (retVal);
}
