#include <stdio.h>

int main() {
    int choice, num;

    printf("1. Even or Odd\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Square = %d", num * num);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Cube = %d", num * num * num);
            break;

        case 4:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}