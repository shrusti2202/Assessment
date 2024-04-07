#include <stdio.h>

int main() {
    char choice;
    int keepCalculating = 1;

    do {
        printf("\n=======MENU=======\n");
        printf("1. Addition\n");
        printf("2. Substrication\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Enter your choice: ");
        scanf(" %c", &choice);

        
        switch (choice) {
            case '1':
                add();
                break;
            case '2':
                subtract();
                break;
            case '3':
                multiply();
                break;
            case '4':
                divide();
                break;
            default:
                printf("Invalid choice! Please select from the menu.\n");
        }
    } while (keepCalculating);

    printf("Thank you for using the calculator!\n");
    return 0;
}


  add() {
    double num1, num2;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}
 subtract() {
    double num1, num2;
    printf("Enter one numbers to subtract : ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

 multiply() {
    double num1, num2;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}

 divide() {
    double num1, num2;
    printf("Enter two numbers to divide (first / second): ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero!\n");
    }
}

