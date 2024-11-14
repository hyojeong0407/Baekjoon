#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        int s = 0;
        for (int i = 1; i < n; i++) {
            if ((n % i) == 0) {
                s += i;
            }
        }

        if (s == n) {
            printf("%d = ", s);

            for (int i = 1; i < n; i++) {
                if ((n % i) == 0) {
                    printf(i != n - i ? "%d + " : "%d", i);
                }
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}