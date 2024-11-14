#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int n, b;
	scanf("%d %d", &n, &b);

	char res[27] = { 0 };
	int i = 0;

	while (n > 0) {
		int calc = n % b;
		if (calc >= 0 && calc <= 9) {
			res[i] += calc + '0';
		}
		else {
			res[i] += calc - 10 + 'A';
		}

		i++;
		n /= b;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%c", res[j]);
	}

	return 0;
}