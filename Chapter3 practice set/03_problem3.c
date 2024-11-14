/*
     TAX CHART
*/

#include<stdio.h>

void main(){
    float income, Tax=0;
    printf("Enter your income: \n ");
    scanf("%f", &income);
    if(income<=250000){
      Tax = 0;
    }
    else if(income>250000 && income<=500000){
      Tax = 0.05*(income - 250000);
    }
    else if(income>500000 && income<=1000000){
      Tax = 0.05*(500000 - 250000) + 0.2*(income - 500000);
    }
    else {
      Tax = 0.05*(500000 - 250000) + 0.2*(income - 500000) + 0.3*(income - 1000000);
    }
    printf("The total tax you need to pay is %.2f", Tax); // %.2f is we need only two digits after decimal
}