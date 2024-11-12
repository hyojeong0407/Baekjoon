#include <stdio.h>

int main() {
    int result, cnt = 0;
    int a, b, c, d = -1;

    int n;
    scanf("%d", &n);

    result = n;

    while (d != result) {
        a = n / 10;
        b = n % 10;
        c = (a + b) % 10;
        d = (b * 10) + c;

        n = d;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}