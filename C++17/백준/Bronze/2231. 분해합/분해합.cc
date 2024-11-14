#include <stdio.h>

int brute_sum(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (brute_sum(i) == n) {
			printf("%d", i);
			break;
		}
		if (i == n) {
			printf("0");
		}
	}
	return 0;
}