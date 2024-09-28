#include <stdio.h>

int power(int x, int n);
int main(void){
    
    int i; 
    for( i=0; i < 10; ++i){
        printf("%d %d %d\n",i,power(2,i),power(-3,i));
    }
}

int power(x,n)
    int x,n;
{
    int i,p;
    p=1;
    for ( i = 0; i < n; i++)
    {
        p=p*x;
    }
    return (p);
    
}
