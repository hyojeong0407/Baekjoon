#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char N[10000] = { 0 };
	int B;
	int res = 0;
	scanf("%s %d", N, &B);

	int len = strlen(N);

	for (int i = 0; i < len; i++) {
		int dig;
		if (N[i] >= '0' && N[i] <= '9') {
			dig = N[i] - '0';
		}
		else if (N[i] >= 'A' && N[i] <= 'Z') {
			dig = N[i] - 'A' + 10;
		}
		res += dig * pow(B, len - 1 - i);
	}
	printf("%d", res);

	return 0;
}