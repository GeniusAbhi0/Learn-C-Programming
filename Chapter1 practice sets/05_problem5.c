/*
  Swapping two numbers without using third variable
*/

#include<stdio.h>

void main(){
    int a, b, c;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Swapped numbers are %d%d", a, b);
}