#include <stdio.h>
// #include "config.h"

#include "function.H"

char array[] = {1, 2, 3, 4};

class A
{
    char *arrayp;
    size_t size;
public:
    A(char*i_p, size_t i_size):arrayp(i_p), size(i_size){}

    void print()
    {
        for(size_t i=0; i<size; i++)
        {
            printf("%d\n", arrayp[i]);
        }
    }
};

int main(int argc, char* argv[])
{
#ifdef PROG1
   hello((char*)"PROG1");
#endif
#ifdef PROG2
   hello((char*)"PROG2");
#endif

    // A a(&array[0], 4);
    // a.print();

   return 0;
}
