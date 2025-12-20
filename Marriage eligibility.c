#include <stdio.h>

int main() {
    int age;
    char gender;

    scanf("%c %d", &gender, &age);

    if (gender == 'M' || gender == 'm') {
        if (age >= 21)
            printf("Eligible for marriage");
        else
            printf("Not eligible for marriage");
    } else if (gender == 'F' || gender == 'f') {
        if (age >= 18)
            printf("Eligible for marriage");
        else
            printf("Not eligible for marriage");
    }

    return 0;
}
