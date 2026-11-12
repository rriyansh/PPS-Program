#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n, i;                          // n = upper limit, i = loop counter
    printf("Enter N: ");               // prompt
    scanf("%d", &n);                   // read N

    for (i = 1; i <= n; i++) {         // start i at 1; run while i <= n; increase i by 1 each time
        printf("%d ", i);              // print i followed by a space
    }
    printf("\n");                      // move to next line at the end
    return 0;                          // end
}
