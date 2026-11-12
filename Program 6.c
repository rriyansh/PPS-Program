#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int a, b;                          // two integers
    printf("Enter two numbers: ");     // prompt
    scanf("%d %d", &a, &b);            // read inputs

    if (a > b) {                       // is a strictly greater than b?
        printf("%d is larger\n", a);   // yes → a is larger
    } else if (b > a) {                // otherwise, is b strictly greater?
        printf("%d is larger\n", b);   // yes → b is larger
    } else {                           // neither greater → they are equal
        printf("Both are equal\n");
    }
    return 0;                          // end
}
