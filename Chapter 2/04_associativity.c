/*
        ASSOCIATIVITY ON EQUAL PRECEDENCE
*/


#include<stdio.h>

void main(){
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d\n", a*b/c + 10);
    printf("The value is %d\n", 3*b/2*c + 10*a);
}