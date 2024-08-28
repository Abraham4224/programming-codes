#include <stdio.h>

int main(void){
    int guessednumber;
    printf("Enter a number:");
    scanf("%d",&guessednumber);
    if (guessednumber<100){
        printf("\nYour number %d is less than 100\n",guessednumber);
    }
    else if (guessednumber>100){
        printf("\nYour number %d is greater than 100\n",guessednumber);
    }
    else {
        printf("\nYour number is 100\n");
    }
    return 0;
}
