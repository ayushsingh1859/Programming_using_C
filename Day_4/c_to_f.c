#include <stdio.h>
int main(){
    float c, f;
    printf("Enter the temperature in celsius : ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The temperature of %.2fc in fahreneit is %.2f ",c,f);
}