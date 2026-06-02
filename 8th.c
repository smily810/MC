#include <lpc21xx.h>

int main()
{
    unsigned int num = 5, i;
    unsigned long fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return 0;
}
