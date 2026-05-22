#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,fact = 1;
	printf("Enter a number : ");
	scanf("%d", &n);
	if (n < 0) {
		printf(stderr, "Please input a positive integer.\n");
		return 1;
	}
	for (int i = 2; i <= n; ++i) {
		fact *= i;
	}
    printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
