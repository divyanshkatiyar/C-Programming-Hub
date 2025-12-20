#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    /* Check validity */
    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            printf("Valid Triangle\n");

            /* Check type */
            if (a == b && b == c)
                printf("Equilateral Triangle");
            else if (a == b || b == c || a == c)
                printf("Isosceles Triangle");
            else
                printf("Scalene Triangle");
        } else {
            printf("Invalid Triangle");
        }
    } else {
        printf("Invalid Triangle");
    }

    return 0;
}