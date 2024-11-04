#include<stdio.h>
int main () {
    int Year ;
    printf("Enter a Year:");
    scanf("%d", &Year);
    (Year%4==0 && Year%100!=0) || (Year%400==0)?
        printf("This is leap year"): printf("This is not leap year");
    return 0;
}