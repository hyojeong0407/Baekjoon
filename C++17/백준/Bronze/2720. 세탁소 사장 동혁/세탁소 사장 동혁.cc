#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int money[] = { 25, 10, 5, 1 };

	while (t--) {
		int c;
		scanf("%d", &c);

		for (int i = 0; i < 4; i++) {
			printf("%d ", c / money[i]);
			c %= money[i];
		}
		printf("\n");
	}

	return 0;
}