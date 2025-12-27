#include <stdio.h>
int main(){
    int n ,rem=0, temp;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp= n;
    while(n>0){
        rem=rem*10 +n% 10  ;
        n/=10;
    }
    if(temp == rem){
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
    return 0;
}