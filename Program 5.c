#include <stdio.h>                     // header for printf and scanf
int main() {                           // start of program
    int a, b, rem;                     // two inputs and one result
    printf("Enter two numbers: ");     // prompt
    scanf("%d %d", &a, &b);            // read inputs

    if (b == 0) {                      // modulus by zero is illegal
        printf("Modulus by zero not allowed!\n");  // warn
    } else {                           // safe to compute
        rem = a % b;                   // % returns remainder
        printf("Remainder = %d\n", rem);   // print it
    }
    return 0;                          // done
}
