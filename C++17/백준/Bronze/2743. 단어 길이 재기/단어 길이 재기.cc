#include <stdio.h>
#include <string.h>

int main() {
	char w[100] = { 0 };
	int cnt = 0;

	scanf("%s", w);

	cnt = strlen(w);
	printf("%d", cnt);

	return 0;
}