#include <stdio.h>

int main() {
    float number1;
    float number2;
    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the second number: ");
    scanf("%f", &number2);
    float sum = number1 + number2;
    printf("The sum of the 2 numbers is %f", sum);
    float difference = number1 - number2;
    printf("\nThe difference of the 2 numbers is %f", difference);
    float multiplication = number1 * number2;
    printf("\nThe multiplication of the 2 numbers is %f", multiplication);
    float division = number1 / number2;
    printf("\nThe division of the 2 numbers is %f", division);
    return 0;
}