//	Write a c program to perform all the arithmetic operation.
#include <stdio.h>
int main(){
    int a , b;
    printf("Enter the 2 numbers:");
    scanf("%d %d", &a, &b);
    printf("Addition of %d and %d is: %d\n", a, b, a+b);
    printf("Subtraction of %d and %d is: %d\n", a, b, a-b);
    printf("Multiplication of %d and %d is: %d\n", a, b, a*b);
    printf("Division of %d and %d is: %.2f\n", a, b, (float)a/b);
    printf("Modulo of %d and %d is: %d\n", a, b, a%b);
}