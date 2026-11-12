#include <stdio.h>                     // include stdio for input and output
int main() {                           // execution begins here
    int a, b, diff;                    // declare two inputs and one result variable
    printf("Enter two numbers: ");     // prompt the user
    scanf("%d %d", &a, &b);            // read two integers
    diff = a - b;                      // subtract b from a
    printf("Difference = %d\n", diff); // print result
    return 0;                          // end program successfully
}
