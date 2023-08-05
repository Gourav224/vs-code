

//Hello i will give you an example and explain it:

#include <stdio.h>
#include <time.h>

int main()
{

    clock_t start_clk = clock();

    /*
        put any code here
    */

    printf("Processor time used by program: %lg sec.\n", \
    (clock() - start_clk) / (long double) CLOCKS_PER_SEC);

    return 0;
}