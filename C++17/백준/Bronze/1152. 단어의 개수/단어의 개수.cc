#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0;
	char w[1000001] = { 0 };
	scanf("%[^\n]", w);

	for (int i = 0; i < strlen(w); i++) {
		if (w[i] == 32) {
			cnt++;
		}
	}

	if (w[0] == 32) {
		cnt--;
	}
	if (w[strlen(w) - 1] == 32) {
		cnt--;
	}

	printf("%d", cnt + 1);

	return 0;
}