#include "header.h"

int checkPh(long long int n)
{
    if(n>=1000000000 && n<=9999999999)
        return 1;
    else
        return 0;
}
