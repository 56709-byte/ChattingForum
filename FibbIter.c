#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, n;
    printf("How many terms to print? ");
    scanf("%d", &n);
    if (n >= 1)
        printf("%d\n", a);

    if (n >= 2)
        printf("%d\n", b);

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    return 0;
}