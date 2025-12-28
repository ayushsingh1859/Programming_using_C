// Write a program to enter value of x, y, z and assign value of y to x, z to y and x to z.
#include <stdio.h>
int main (){
    int x,y,z,temp;
    printf("Enter the value of x , y and z : \n");
    scanf("%d %d %d",&x,&y,&z);
     printf("before swapping : x=%d , y=%d , z=%d\n",x,y,z);
    temp=x;
    x=y;
    y=z;
    z=temp;
   
    printf("after swapping : x=%d , y=%d , z=%d\n",x,y,z);
}