/*
 * 2012-08-17
 * Author Linas Ziedas aka cargan
 *
 * Problem http://projecteuler.net/problem=2
 *
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    int fab[50];
    int fab_key = 1;
    fab[0] = 1;
    fab[1] = 2;

    while(fab[fab_key] < 4000000)
    {
        if (fab[fab_key] % 2 == 0)
        {
            sum += fab[fab_key];
        }
        fab[fab_key + 1] = fab[fab_key - 1] + fab[fab_key];
        fab_key++;
    }
    printf("SUM: %d\n", sum);
    return 0;
}
