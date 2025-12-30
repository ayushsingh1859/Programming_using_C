#include <stdio.h>
void checkevenodd(int num);

int main(){
    int n;
    printf("ENTER THE number: ");
    scanf("%d", &n);

    checkevenodd(n);

    return 0;
}

void checkevenodd(int num){
    if (num %2 ==0){
        printf("%d is a even number", num);
    }
    else{
        printf("%d is a odd number", num);
    }
}

