#include<stdio.h>
int main() {
    //create a calculator that can perform addition, subtraction, multiplication, and division
    int choice;
    float num1,num2,result;
    printf("Enter 1st number:");
    scanf("%f",&num1);
    printf("Enter 2nd number:");
    scanf("%f",&num2);
    printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %f",result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %f",result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f",result);
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %f",result);
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid choice.");
    }
    return 0;
}