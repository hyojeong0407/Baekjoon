#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = n + 1; i < n * 2; i++) {
		for (int j = n; j < i; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * (2 * n - i); j++) {
			printf("*");
		}
		printf("\n");
	}
    return 0;
}