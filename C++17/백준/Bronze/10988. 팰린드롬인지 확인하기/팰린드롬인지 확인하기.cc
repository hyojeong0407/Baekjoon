#include <stdio.h>
#include <string.h>

int main() {
    char palin[101] = { 0 };
    scanf("%s", palin);

    int max = strlen(palin);
    int F = 0;

    for (int i = 0; i < max; i++) {
        if (palin[i] == palin[max - 1]) {
            F = 1;
            max--;
        }
        else {
            F = 0;
            break;
        }
    }

    printf("%d", F);

    return 0;
}