#include <stdio.h>
#include "config.h"

#include "function.h"

int main(int argc, char* argv[])
{
#ifdef PROG1
   hello((char*)"PROG1");
#else
   hello((char*)"PROG2");
#endif

   return 0;
}
