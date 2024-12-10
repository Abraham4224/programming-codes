#include <stdio.h>

int main()
{
    char line[1000];
    FILE *hand; // Puntero para manejar el archivo
    hand = fopen("romeo.txt","r");
    while( fgets(line,1000,hand) != NULL ) {
        printf("%s",line);
    }
    fclose(hand); 
    return 0;
}
