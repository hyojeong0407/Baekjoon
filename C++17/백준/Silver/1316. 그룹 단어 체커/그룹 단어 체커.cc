#include <stdio.h>
#include <string.h>

int main() {
    int group, cnt = 0;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char len[100] = { 0 };
        scanf("%s", len);
        group = 1;

        for (int j = 0; j < strlen(len); j++) {
            for (int k = 0; k < j - 1; k++) {
                if (len[j] == len[k] && len[j] != len[j - 1]) {
                    group = 0;
                    break;
                }
            }
            if (group == 0) {
                break;
            }
        }

        if (group == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}