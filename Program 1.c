#include <stdio.h>                     // include stdio library for printf and scanf
int main() {                           // main function — program execution starts here
    int a, b, sum;                     // declare three integer variables a, b and sum
    printf("Enter two numbers: ");     // display a message asking the user for input
    scanf("%d %d", &a, &b);            // read two integers from keyboard into a and b
    sum = a + b;                       // add a and b, store result in sum
    printf("Sum = %d\n", sum);         // print the sum followed by a newline
    return 0;                          // return 0 to indicate successful completion
}
