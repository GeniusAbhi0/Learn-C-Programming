#include<stdio.h>

void main(){
    int age;
    printf("Enter Your age:\n");
    scanf("%d", &age);

    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You can not drive");
    }
}