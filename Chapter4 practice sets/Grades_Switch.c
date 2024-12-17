#include<stdio.h>

void main(){
    float P,C,M,E,H, sum, per;
    printf("Enter the marks of 5 subjects\n");
    scanf("%f%f%f%f%f", &P, &C, &M, &E, &H);
    sum = P+C+M+E+H;
    per = sum/5;
    printf("Percentage is %f\n",per);

    switch ((int)(per / 10)) {
        case 10:
        case 9:
            printf("Grade: A \n");
            break;
        case 8:
            // 80 - 90%
            printf("Grade: B \n");
            break;
        case 7:
             // 60 - 80%
            printf("Grade: C \n");
            break;
        case 6:
             // Below 60 
            printf("Grade: D \n");
            break;
        default:
            printf("Enter correct marks \n");
    }
}