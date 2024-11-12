#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int f = 1;
	while (1) {
		if ((f - 1) * (f) / 2 < x && x <= (f) * (f + 1) / 2) {
			break;
		}
		f++;
	}
	if (f % 2 != 0) {
		int a = f * (f + 1) / 2;
		printf("%d", a - x + 1);
		printf("/");
		printf("%d", f - (a - x));
	}
	else {
		int a = f * (f + 1) / 2;
		printf("%d", f - (a - x));
		printf("/");
		printf("%d", a - x + 1);
	}

	return 0;
}