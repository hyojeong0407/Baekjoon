#include <stdio.h>
 
int main() {
    int input, result = 0;
    int re[10] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        re[i] = (input % 42);
    }
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = i + 1; j < 10; j++) {
            if (re[i] == re[j]) {
                count++;
            }
        }
        if (count == 0) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}