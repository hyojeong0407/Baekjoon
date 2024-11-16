#include <stdio.h>

int main() {
	int sum = 0;
	int n;
	scanf("%d", &n);

	char m[101] = { 0 };
	scanf("%s", m);

	for (int i = 0; i < n; i++) {
		sum = sum + m[i] - '0';
	}
	printf("%d", sum);

	return 0;
}