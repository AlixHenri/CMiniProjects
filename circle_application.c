#include <stdio.h>

int main(){
    const double PI = 3.1459;
    double radius;
    double circumference;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("circumference: %lf\n", circumference);

    return 0;
}