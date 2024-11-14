#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int i;
    int cnt = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
        if (cnt == k) {
            break;
        }
    }
    if (i <= n) {
        printf("%d", i);
    }
    else {
        printf("0");
    }

    return 0;
}