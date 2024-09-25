#include <stdio.h>

int main(void) {

    int c, tab, nl, blank;
    tab=0;
    nl=0;
    blank=0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ')
        {
            ++blank;
        }
        if (c == '\t')
        {
            ++tab;
        }
        
        
    }
    printf("Number of newlines are: %d\n",nl);
    printf("Number of tabs are: %d\n",tab);
    printf("Number of blanks are: %d\n",blank);
    return 0;
}
