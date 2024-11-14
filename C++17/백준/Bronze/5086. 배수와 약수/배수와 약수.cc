#include <stdio.h>

int main() {
	int d, m;

	while (1) {
		scanf("%d %d", &d, &m);
		if (d == 0 && m == 0) {
			return 0;
		}

		if (m % d == 0) {
			printf("factor\n");
		}
		else if (d % m == 0) {
			printf("multiple\n");
		}
		else {
			printf("neither\n");
		}
	}
	return 0;
}