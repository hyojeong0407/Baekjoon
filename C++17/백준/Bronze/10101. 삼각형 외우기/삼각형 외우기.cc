#include <stdio.h>

int main() {
    int ang1, ang2, ang3;
    scanf("%d\n%d\n%d", &ang1, &ang2, &ang3);

    int sum = ang1 + ang2 + ang3;

    if (ang1 == 60 && ang1 == ang2 && ang2 == ang3) {
        printf("Equilateral");
    }
    else if (sum == 180 && (ang1 == ang2 || ang2 == ang3 || ang3 == ang1)) {
        printf("Isosceles");
    }
    else if (sum == 180) {
        printf("Scalene");
    }
    else {
        printf("Error");
    }
    return 0;
}