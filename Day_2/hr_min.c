//3)	Write a program in C that takes minutes as input, and display the total number of hours and minutes
#include <stdio.h>
int main() {
    int total_minutes, hours, minutes;

    // Taking input from the user
    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);

    // Calculating hours and remaining minutes
    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    // Displaying the result
    printf("%d minutes is equal to %d hours and %d minutes.\n", total_minutes, hours, minutes);

    return 0;
}