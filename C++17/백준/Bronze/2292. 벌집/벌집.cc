#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n == 1) {
		printf("%d", 1);
		return 0;
	}

	int i = 2, j = 5, cnt = 2;
	while (1) {
		if (i <= n && i + j >= n) {
			printf("%d", cnt);
			break;
		}

		i += j + 1;
		j += 6;
		cnt++;
	}

	return 0;
}