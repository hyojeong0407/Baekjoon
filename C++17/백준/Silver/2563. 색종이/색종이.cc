#include <stdio.h>
#include <string.h>

int main() {
	int paper[100][100] = { 0, };
	int x, y, cnt = 0;

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (int j = y; j < y + 10; j++) {
			for (int k = x; k < x + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}

	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < 100; k++) {
			if (paper[j][k] == 1) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);
    return 0;
}