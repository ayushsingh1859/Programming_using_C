//Write a program to input 3 sides of a triangle and then find area of a triangle by Finding 2s=a + b +c, where a, b, c are 3 sides.

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The semi-perimeter (s) is: %.2f\n", s);
    printf("The area of the triangle is: %.2f\n", area);
}