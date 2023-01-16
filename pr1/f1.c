#include "math.h"

int culc(int a_1, int d, int n)
{
    int S_n = 0;
    S_n=(((2*a_1)+(d*(n-1)))*n)/2;

    return S_n;
}