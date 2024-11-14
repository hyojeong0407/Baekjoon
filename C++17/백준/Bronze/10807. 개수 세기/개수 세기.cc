#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
    int N;
    int arr[101] = {0};
    int v;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    int res = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == v)
            res++;
    }
    printf("%d", res);
	return 0;
}