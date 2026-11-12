
#include <stdio.h>                     // standard I/O header
int main() {                           // entry point of program
    int a, b, product;                 // three int variables
    printf("Enter two numbers: ");     // ask for input
    scanf("%d %d", &a, &b);            // read two ints
    product = a * b;                   // multiply a and b
    printf("Product = %d\n", product); // print result
    return 0;                          // exit successfully
}
