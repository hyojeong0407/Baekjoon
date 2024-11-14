#include <stdio.h>
#include <math.h>

int Isprime(int x) {
    int len;
    len = sqrt(x);

    if (len == sqrt(x)) {
        return 0;
    }
    for (int i = 2; i <= len; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return x;
}

int main() {
	int m, n;
	scanf("%d\n%d", &m, &n);

    int arr[1230] = { 0 };

    int sum = 0, p = 0;
    for (int i = m; i <= n; i++) {
        sum += Isprime(i);

        if (Isprime(i) > 0) {
            arr[p] = Isprime(i);
            p++;
        }
    }

    int min = arr[0];
    if (sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d", sum, min);
    }

	return 0;
}