#include <stdio.h>

int main() {
    while (1) {
        int ang1, ang2, ang3;
        scanf("%d %d %d", &ang1, &ang2, &ang3);
        if (ang1 == 0 && ang2 == 0 && ang3 == 0) {
            break;
        }

        if (ang1 == ang2 && ang2 == ang3 && ang3 == ang1) {
            printf("Equilateral\n");
        }
        else if (ang1 >= ang2 + ang3 || ang2 >= ang3 + ang1 || ang3 >= ang1 + ang2) {
            printf("Invalid\n");
        }
        else if (ang1 == ang2 || ang2 == ang3 || ang3 == ang1) {
            printf("Isosceles\n");
        }
        else if (ang1 != ang2 && ang2 != ang3 && ang3 != ang1) {
            printf("Scalene\n");
        }
    }
    return 0;
}