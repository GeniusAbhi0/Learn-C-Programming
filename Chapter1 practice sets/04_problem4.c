/*
  Swapping two numbers without using third variable
*/

#include<stdio.h>

void main(){
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swapped numbers are %d%d", a, b);
}