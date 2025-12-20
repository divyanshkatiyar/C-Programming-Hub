#include <stdio.h>

int main() {
    int age;

    // Ask user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}