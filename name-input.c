#include <stdio.h>

int main(void){
    char name[100];
    printf("Enter your name\n");
    scanf("%100s",name);
    printf("Hello %s",name);
    return 0;
}
