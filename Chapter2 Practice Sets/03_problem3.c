/*
       CHECK WHETHER A NUMBER IS DIVISIBLE BY 97 OR NOT
*/

#include<stdio.h>

void main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);
    (a%97==0)?printf("The number is divisible by 97"):printf("The number is not divisible by 97");
}