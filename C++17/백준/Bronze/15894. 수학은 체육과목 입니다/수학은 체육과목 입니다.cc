#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    if (n > 0 && n < 1000000001) {
        printf("%lld", n * 4);
    }

    return 0;
}