#include<stdio.h>
int main () {
    int a ;
    printf("Enter the number for a:");
    scanf("%d", &a);
    ((a%2==0)?printf("The number is even"):printf("The number is odd"));
    return 0;
}