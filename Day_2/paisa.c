//2)	Write a c program to read the price of an item in decimal form(like 15.95) and print the output in paisa(like 1595).
#include <stdio.h>
int main(){
    float price;
    int paisa;
    printf("Enter the price of the item in decimal form: ");
    scanf("%f", &price);
    paisa = (int)(price * 100);
    printf("The price in paisa is: %d\n", paisa);
    return 0;
}