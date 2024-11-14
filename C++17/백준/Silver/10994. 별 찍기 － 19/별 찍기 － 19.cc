#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n == 1) {
		printf("*");
		return 0;
	}
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i == 0 && i == 4 * (n - 1)) {
            for (int j = 0; j < 4 * (n - 1) + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        if (i % 2 == 1) {
            for (int j = 0; j < (i + 1) / 2; j++) {
                printf("* ");
            }
            for (int j = 0; j < 4 * (n - ((i + 3) / 2)) + 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < (i + 1) / 2; j++) {
                printf(" *");
            }
            printf("\n");
        }
        else {
            for (int j = 0; j < i / 2; j++) {
                printf("* ");
            }
            for (int j = 0; j < 4 * (n - ((i + 2) / 2)) + 1; j++) {
                printf("*");
            }
            for (int j = 0; j < i / 2; j++) {
                printf(" *");
            }
            printf("\n");
        }
    }
    for (int i = 1; i < 2 * n - 1; i++) {
        if (i == 2 * n - 2) {
            for (int j = 0; j < 4 * (n - 1) + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        else {
            if (i % 2 == 1) {
                for (int j = 0; j < n - ((i + 1) / 2); j++) {
                    printf("* ");
                }
                for (int j = 0; j < 4 * (((i + 1) / 2) - 1) + 1; j++) {
                    printf(" ");
                }
                for (int j = 0; j < n - ((i + 1) / 2); j++) {
                    printf(" *");
                }
                printf("\n");
            }
            else {
                for (int j = 0; j < n - ((i + 2) / 2); j++) {
                    printf("* ");
                }
                for (int j = 0; j < 4 * (((i + 2) / 2) - 1) + 1; j++) {
                    printf("*");
                }
                for (int j = 0; j < n - ((i + 2) / 2); j++) {
                    printf(" *");
                }
                printf("\n");
            }
        }
    }
	return 0;
}