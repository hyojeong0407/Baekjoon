#include <stdio.h>

int main() {
	int n, m, one, two, t;
	int a[101] = { 0 };

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &one, &two);

		for (int j = one - 1; j < two; j++) {
			t = a[j];
			a[j] = a[two - 1];
			a[two - 1] = t;
			two--;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}