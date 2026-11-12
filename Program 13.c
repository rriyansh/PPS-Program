#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n, i;                          // inputs and counter
    printf("Enter N: ");               // prompt
    scanf("%d", &n);                   // read

    for (i = 1; i <= n; i++) {         // loop from 1 to n
        if (i % 2 == 0) {              // only if i is even
            printf("%d ", i);          // print it
        }
    }
    printf("\n");                      // newline
    return 0;                          // end
}
