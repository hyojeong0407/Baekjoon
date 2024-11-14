#include <stdio.h>

int main(void) {

	int testcase;
	int a, b, i = 0;

	scanf("%d", &testcase);

	while (i < testcase) {
		scanf("%d %d", &a, &b);

		printf("%d\n", a + b);

		i++;
	}

	return 0;
}