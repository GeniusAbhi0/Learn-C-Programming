/*
 Write a C program to calculate  area of a Rectangle
*/

#include<stdio.h>
void main(){
    int length,breadth,Area; // a & b are sides of rectangle
    printf("Enter the length:\n");
    scanf("%d", &length);

    printf("Enter the breadth:\n");
    scanf("%d", &breadth);
    
    Area = length*breadth; // Formula of area of rectangle 5
    printf("Area of rectangle is %d", Area);
}