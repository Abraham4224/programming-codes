#include <stdio.h>

int main()
{
    char line[1000]; // Array to store a line from the file
    FILE *hand; // Pointer to manage the file
    hand = fopen("romeo.txt","r");
    while( fgets(line,1000,hand) != NULL ) {
        printf("%s",line);
    }
    fclose(hand); //Closes the file after reading
    return 0;
}
