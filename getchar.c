#include <stdio.h>


/* This is a comment*/
int main(void)
{   
    printf("hello world\n"); //Comment
    int c=getchar();
    putchar(c);
    int d;
    while((d = getchar()) != EOF){
        putchar(d);
    }
    return 0;
} 
