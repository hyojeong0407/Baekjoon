#include <stdio.h>

int main() {
    char name[51] = { 0 }, grade[3] = { 0 };
    double rate, sumrate = 0.0, tmp, res = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", name, &rate, grade);

        if (grade[0] == 'P') {
            continue;
        }

        sumrate += rate;
        if (grade[0] == 'F') {
            continue;
        }

        if (grade[0] == 'A') {
            tmp = 4;
        }
        else if (grade[0] == 'B') {
            tmp = 3;
        }
        else if (grade[0] == 'C') {
            tmp = 2;
        }
        else {
            tmp = 1;
        }

        if (grade[1] == '+') {
            tmp += 0.5;
        }

        res += rate * tmp;
    }

    printf("%lf", res / sumrate);

    return 0;
}