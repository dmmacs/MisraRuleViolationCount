
#include <stdio.h>
#include "ProcessArgs.h"

int ProcessArgs(int argc, char *argv[])
{

    int retVal = 0;

    if (argc < 2)
    {
        puts("Usage: MisraRuleViolationCount <filename>");
        return (1);
    }

    return (retVal);
}
