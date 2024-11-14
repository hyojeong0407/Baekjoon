#include <stdio.h>
#include <string.h>

int main() {
	char arr[1001] = { 0 };
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%s", arr);
		printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}

	return 0;
}