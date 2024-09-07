#include <stdio.h>

int main(void)
{
    char line[1000];
    printf("Enter a line:\n");
    scanf("%[^\n]1000s",line);
    printf("Line: %s",line);
    return 0;
}
