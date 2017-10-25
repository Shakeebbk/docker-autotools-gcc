#include <stdio.h>
#include "config.h"

#include "function.h"

void hello(char *msg)
{
    #ifdef DD1
    printf("%s", "DD1 says ");
    #else
    printf("%s", "DD2 says hello ");
    #endif
    printf("%s\n", msg);
}
