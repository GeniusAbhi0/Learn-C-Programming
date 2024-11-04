/*
  Convert celcius in fahrenheit
*/

#include<stdio.h>

void main(){
    float c,f ;
    printf("Enter the value of celcius:\n");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("The celcius value in fahrenheit is %f", f);
}