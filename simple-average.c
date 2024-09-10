#include <stdio.h>

int main(void){
    int a = 5, b = 6, c = 7;
    double average = 0.0;

    printf("a = %d, b = %d, c = %d\n",a,b,c);
    average= (a + b + c) / 3.0;
    printf("Average is %lf\n",average);
    return 0;
} 
