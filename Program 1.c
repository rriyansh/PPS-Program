
#include <stdio.h>              // header for input/output
int main() {                    // program entry point
    int a, b, sum;              // declare 3 integers
    printf("Enter two numbers: ");   // prompt user
    scanf("%d %d", &a, &b);     // read both numbers
    sum = a + b;                // add them
    printf("Sum = %d\n", sum);  // display result
    return 0;                   // exit successfully
}
