#include <stdio.h>

int power(x, n) /* raise x to n-th power; n > 0 */
int x, n;
{
    int i,p;

    for (p = 1; n > 0; --n)
        p = p * x;
    return (p);
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d %d\n",a,power(a,b));
}
