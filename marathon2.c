#include <stdio.h>

int main(void){
    int miles;
    int yards;
    printf("Enter the miles as an integer:");
    scanf("%i",&miles);
    printf("\nEnter the yards as an integer:");
    scanf("%i",&yards);
    double kilometers;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n",kilometers);
    return 0;
}
