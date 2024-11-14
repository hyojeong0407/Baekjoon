#include <stdio.h>

int main() {
	int n, m, one, two, t;
	int a[100] = { 0 };

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &one, &two);

		t = a[one - 1];
		a[one - 1] = a[two - 1];
		a[two - 1] = t;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}