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
    "\n[*] Multiplication");
    scanf("%c", &operator);

    printf("\nEnter the first number");
    scanf("%lf", &num1);

    printf("\nEnter the second number");
    scanf("%lf", &num2);

    if (operator == '+'){
        double result = num1 + num2;
        printf("%.1lf + %.1lf = %.1lf", num1, num2, result);
    }
    else if(operator == '-'){
        double result = num1 - num2;
        printf("%.1lf - %.1lf = %.1lf", num1, num2, result);
    }else if(operator == '/'){
        if(num1 == 0 || num2 == 0){
            printf("Error: 0 can't be divided or divide a number");
        }else{
            double result = num1 / num2;
            printf("%.1lf - %.1lf = %.1lf", num1, num2, result);
        }

    }else if(operator == '*'){
        double result = num1 * num2;
        printf("%.1lf - %.1lf = %.1lf", num1, num2, result);
    }else{
        printf("Error: invalid operator selected or invalid number inserted. Try Again.");
    }

    return 0;
}