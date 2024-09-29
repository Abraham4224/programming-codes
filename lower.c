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
    if (c >=65 && c<=90)
    {
      return  c = c + 32;
    }
    else {
       return c;
    }
    
}
