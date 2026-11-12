#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n, i;                          // input and counter
    long long fact = 1;                // factorial can be huge — use long long, start at 1
    printf("Enter a number: ");        // prompt
    scanf("%d", &n);                   // read n

    if (n < 0) {                       // factorial of negative is undefined
        printf("Factorial not defined for negative numbers\n");
    } else {                           // safe to compute
        for (i = 1; i <= n; i++) {     // multiply 1 × 2 × ... × n
            fact *= i;                 // fact = fact * i
        }
        printf("Factorial = %lld\n", fact);   // %lld prints long long
    }
    return 0;                          // end
}
