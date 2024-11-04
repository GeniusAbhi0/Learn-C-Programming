/*
  Calculate Area of circle 
  use this Area to calculate the Volume of cylinder
*/
#include<stdio.h>

void main(){
    float r ,h, Area, Volume;
    printf("Enter the radius of circle:\n");
    scanf("%f", &r);

    Area = 3.14*r*r;
    printf("Area of cirlce is %f\n", Area);
    
    printf("Enter the height of cylinder:\n");
    scanf("%f", &h);

    Volume = Area*h;
    printf("Volume of cylinder is %f", Volume);

}