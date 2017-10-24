#include <stdio.h>
#include "config.h"

int main(int argc, char* argv[])
{
#ifdef PROG1
   printf("Hello, world!\n");
#else
   printf("Another Hello!\n");
#endif

   return 0;
}
