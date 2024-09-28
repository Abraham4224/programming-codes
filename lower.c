#include <stdio.h>

int lower(int c);

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        int f = lower(c);
        printf("%c",f);
    }
    
}

int lower(c)
int c;
{
    int d;
    if (c >=65 && c<=90)
    {
        d=c+32;
    }
    else {
        d=c;
    }
    return (d);
    
}
