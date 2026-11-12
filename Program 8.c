#include <stdio.h>                     // header for I/O
int main() {                           // entry point
    int n;                             // the number to test
    printf("Enter a number: ");        // prompt
    scanf("%d", &n);                   // read n

    if (n % 2 == 0) {                  // remainder 0 when divided by 2 → even
        printf("%d is Even\n", n);
    } else {                           // otherwise odd
        printf("%d is Odd\n", n);
    }
    return 0;                          // end
}
