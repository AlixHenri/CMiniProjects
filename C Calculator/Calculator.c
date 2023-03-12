#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double total;

    printf("\nEnter an operator:"
    "\n[+] Sum"
    "\n[-] Subtraction"
    "\n[/] Division"
    "\n[*] Multiplication"
    "\n>");
    scanf("%c", &operator);

    printf("\nEnter the first number"
    "\n>");
    scanf("%lf", &num1);

    printf("Enter the second number"
    "\n>");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        double result = num1 + num2;
        printf("\n%.1lf + %.1lf = %.1lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n%.1lf - %.1lf = %.1lf", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n%.1lf / %.1lf = %.1lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n%.1lf * %.1lf = %.1lf", num1, num2, result);
        break;
    default:
        printf("\nError: Invalid option selected or invalid format inserted as input");
    }
    
    return 0;
}