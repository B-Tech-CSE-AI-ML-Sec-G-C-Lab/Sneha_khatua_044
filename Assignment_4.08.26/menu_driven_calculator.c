/*
WAP in c to make a menu driven calculator
*/
#include <stdio.h>
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    if (b == 0){
    printf("Division by zero is not possible.\n");
    return 0;
    }
    return a / b;
}
void calculate(int choice){
    float num1, num2;
    if (choice >= 1 && choice <= 4){
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }
     switch (choice){
    case 1:
        printf("Addition = %.2f\n", add(num1, num2));
        break;
    case 2:
        printf("Substraction = %.2f\n", subtract(num1, num2));
        break;
    case 3:
        printf("Multiplication = %.2f\n", multiply(num1, num2));
        break;
    case 4:
        printf("Division = %.2f\n", divide(num1, num2));
        break;
    case 5:
        printf("Thank you for using the calculator!\n");
        break;
    default:
        printf("Invalid choice!\n");
    }
}

int main(){
     int choice;
     do{
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        calculate(choice);

    } while (choice != 5);

    return 0;
}