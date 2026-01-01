//1)	The price of 1kg of rice is Rs.16.75 and 1kg of sugar is Rs.15.write a c program to get these values from the user and display the price as follow

#include <stdio.h>
int main(){
  float rice, sugar;
  printf("Enter the price of 1kg rice and 1kg sugar: ");
  scanf("%f %f",&rice , &sugar);
  printf("*** List of items ***\n");
  printf("Item  price\n");
  printf("Rice %.2f\n",rice);
  printf("sugar %.2f\n",sugar);
  
 return 0;
}