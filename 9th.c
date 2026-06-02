#include <lpc21xx.h>

char src[] = "Hello";
char dest[] = "";

void caseConvert()
{
    unsigned int i;

    for(i = 0; src[i] != '\0'; i++)
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i] - 32;
        }

        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i] + 32;
        }
    }

    dest[i] = '\0';
}

int main()
{
    caseConvert();
    return 0;
}
