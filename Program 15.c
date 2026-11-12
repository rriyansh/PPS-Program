#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n, i, sum = 0;                 // sum must be initialized to 0
    printf("Enter N: ");               // prompt
    scanf("%d", &n);                   // read N

    for (i = 1; i <= n; i++) {         // loop from 1 to N
        sum += i;                      // sum = sum + i (accumulate)
    }
    printf("Sum = %d\n", sum);         // print total
    return 0;                          // end
}
