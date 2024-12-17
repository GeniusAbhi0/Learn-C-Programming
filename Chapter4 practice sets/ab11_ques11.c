/*
  Armstrong b/w 1 to 100
*/
#include<stdio.h>
#include<math.h>

void main(){
    int count = 1, arm, n, a, digits;

    while (count <= 100) {
        n = count;
        arm = 0;
        digits = (int)log10(n) + 1;  // Calculate the number of digits

        while (n) {
            a = n % 10;
            arm = arm + pow(a, digits);  // Raise each digit to the power of digits
            n = n / 10;
        }

        if (count == arm) {
            printf("%d is Armstrong\n", count);
        }
        count++;
    }
}