#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);


	int dot = 3, sav = 2;
	for (int i = 1; i < n; i++) {
		dot += sav;
		sav *= 2;
	}

	printf("%d", dot * dot);
	return 0;
}