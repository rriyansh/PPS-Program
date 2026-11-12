#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int n;                             // input number
    printf("Enter a number: ");        // prompt
    scanf("%d", &n);                   // read

    if (n > 0) {                       // strictly greater than 0?
        printf("Positive\n");
    } else if (n < 0) {                // strictly less than 0?
        printf("Negative\n");
    } else {                           // must be 0
        printf("Zero\n");
    }
    return 0;                          // end
}
