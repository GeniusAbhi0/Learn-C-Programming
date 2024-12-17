#include<stdio.h>

void main(){
    int a, b, c, choice;
    printf("Simple Calulator\n");
    printf("Press1 for addition, Press2 for subtraction, Press3 for division, Press4 for multiplication\n");
    printf("Please enter your choice\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter two number\n");
        scanf("%d%d", &a, &b);
        c = a+b;
        printf("The addition of two number is %d", c);
        break;

        case 2:
        printf("Enter two number\n");
        scanf("%d%d", &a, &b);
        c = a-b;
        printf("The subtraction of two number is %d", c);
        break;

        case 3:
        printf("Enter two number\n");
        scanf("%d%d", &a, &b);
        c = a/b;
        printf("The division of two number is %d", c);
        break;

        case 4:
        printf("Enter two number\n");
        scanf("%d%d", &a, &b);
        c = a*b;
        printf("The multiplication of two number is %d", c);
        break;

        default:
         printf("Enter the valid input 1-4\n");
         break;
    }
    
}