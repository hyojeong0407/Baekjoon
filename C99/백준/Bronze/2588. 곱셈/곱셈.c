#include <stdio.h>

int main(void) {

	int firstnum;
	int secondnum;
	scanf("%d %d", &firstnum, &secondnum);

	int a = (secondnum % 10);
	int b = (secondnum / 10) % 10;
	int c = (secondnum / 100);
	int d = firstnum * secondnum;

	printf("%d\n", a * firstnum);
	printf("%d\n", b * firstnum);
	printf("%d\n", c * firstnum);
	printf("%d\n", d);

	return 0;
}