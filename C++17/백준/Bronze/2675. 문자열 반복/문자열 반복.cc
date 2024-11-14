#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int R;
		char s[20] = { 0 };
		scanf("%d %s", &R, s);

		for (int j = 0; j < strlen(s); j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}

	return 0;
}