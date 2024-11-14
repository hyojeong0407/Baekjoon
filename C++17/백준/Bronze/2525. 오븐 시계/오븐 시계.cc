#include <stdio.h>

int main(void) {
	int hh, mm, time;

	scanf("%d %d\n", &hh, &mm);
	scanf("%d", &time);

	hh += time / 60;
	mm += time % 60;

	if (mm >= 60) {
		++hh;
		mm -= 60;
	}
	
	if (hh >= 24) {

		hh -= 24;
	}

	printf("%d %d", hh, mm);

	return 0;
}