#include <stdio.h>
int main(){
    int a = 5, b = 10 , c = 5;
       //relational operators
    printf("a == b : %d\n", a == b); // equal to
    printf("a != b : %d\n", a != b); // not equal to
    printf("a > b : %d\n", a > b); // greater than
    printf("a < b : %d\n", a < b); // less than
    printf("a >= b : %d\n", a >= b); // greater than or equal to
    printf("a <= b : %d\n", a <= b); // less than or equal to
       //logical operators
    printf("(a < b) && (a == c) : %d\n", (a < b) && (a == c)); // logical AND
    printf("(a < b) || (a != c) : %d\n", (a < b) || (a != c)); // logical OR
    printf("!(a < b) : %d\n", !(a < b)); // logical NOT
    return 0;
}