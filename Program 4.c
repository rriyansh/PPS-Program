#include <stdio.h>                     // header for I/O functions
int main() {                           // program entry point
    int a, b;                          // two integers for input
    float quotient;                    // result stored as float (can be fractional)
    printf("Enter two numbers: ");     // prompt the user
    scanf("%d %d", &a, &b);            // read the two integers

    if (b == 0) {                      // safety: division by zero is illegal
        printf("Cannot divide by zero!\n");   // warn and skip
    } else {                           // otherwise it is safe to divide
        quotient = (float)a / b;       // cast a to float so decimal part is preserved
        printf("Quotient = %.2f\n", quotient); // print with 2 decimal places
    }
    return 0;                          // end program
}
