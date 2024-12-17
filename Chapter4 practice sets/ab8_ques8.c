/*
    Print all prime number takin input 100
*/
#include <stdio.h>

void main() {
    int i, j, n, count;

    printf("Enter a number:\n");
    scanf("%d", &n);

    // Loop through all numbers from 2 to n
    for (i = 2; i <= n; i++) {
        count = 0; // Reset count for each number
        
        // Check for divisors from 2 to sqrt(i)
        for (j = 2; j <= i /2; j++) {
            if (i % j == 0) {
                count++;  // Increment count if i is divisible by j
                break;    // If divisible, no need to check further
            }
        }

        // If the count is 0, then i is prime (no divisors other than 1 and i)
        if (count == 0)
            printf("%d ", i);  // Print the prime number
    }
}