#include <stdio.h>

int main() {

    int choice;
    float num1, num2, result;

    do {

        printf("\n========== MENU DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5) {

            printf("Enter First Number: ");
            scanf("%f", &num1);

            printf("Enter Second Number: ");
            scanf("%f", &num2);
        }

        switch(choice) {

        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:

            if(num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Division by Zero is Not Allowed.\n");

            break;

        case 5:

            if((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Modulus by Zero is Not Allowed.\n");

            break;

        case 6:

            printf("\nThank You for Using Calculator.\n");

            break;

        default:

            printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}
