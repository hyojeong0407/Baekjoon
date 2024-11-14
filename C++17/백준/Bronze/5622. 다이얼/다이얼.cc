#include <stdio.h>
#include <string.h>

int main() {
    char alpha[15] = { 0 };
    scanf("%s", alpha);

    int cnt = 0;
    for (int i = 0; i < strlen(alpha); i++) {
        if (alpha[i] >= 65 && alpha[i] <= 67) {
            cnt += 3;
        }
        if (alpha[i] >= 68 && alpha[i] <= 70) {
            cnt += 4;
        }
        if (alpha[i] >= 71 && alpha[i] <= 73) {
            cnt += 5;
        }
        if (alpha[i] >= 74 && alpha[i] <= 76) {
            cnt += 6;
        }
        if (alpha[i] >= 77 && alpha[i] <= 79) {
            cnt += 7;
        }
        if (alpha[i] >= 80 && alpha[i] <= 83) {
            cnt += 8;
        }
        if (alpha[i] >= 84 && alpha[i] <= 86) {
            cnt += 9;
        }
        if (alpha[i] >= 87 && alpha[i] <= 90) {
            cnt += 10;
        }
    }
    printf("%d", cnt);

    return 0;
}