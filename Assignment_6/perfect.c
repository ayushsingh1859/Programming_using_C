#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        
    }
    if(sum == n){
            printf("Its a perfect number");
        }
        else{
            printf("Not a perfect number");
        }
    return 0;
    
}