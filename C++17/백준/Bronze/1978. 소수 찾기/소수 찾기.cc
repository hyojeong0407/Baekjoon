#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

    int num, cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        for (int j = 2; j <= num; j++) {
            if (num == j) {
                cnt++;
            }
            if (num % j == 0) {
                break;
            }
        }
    }

    printf("%d", cnt);

	return 0;
}