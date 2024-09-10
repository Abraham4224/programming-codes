#include <stdio.h>

int main(void){
    char buffer[100];
    printf("Introduce una cadena de texto:\n");
    fgets(buffer,100,stdin);
    printf("La cadena introducida es %s",buffer);
    return 0;
}
