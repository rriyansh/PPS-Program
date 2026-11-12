#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n, i;                          // n = starting value, i = counter
    printf("Enter N: ");               // prompt
    scanf("%d", &n);                   // read

    for (i = n; i >= 1; i--) {         // start at n; run while i >= 1; decrease i by 1
        printf("%d ", i);              // print current i
    }
    printf("\n");                      // newline at end
    return 0;                          // end
}
