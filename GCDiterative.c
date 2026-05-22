#include <stdio.h>
int main()
{
    int a, b, gcd;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    int original_a = a;
    int original_b = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    printf("\nThe GCD of %d and %d is %d\n", original_a, original_b, gcd);
    return 0;
}
