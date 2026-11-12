#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int a, b, c, max;                  // three inputs and one max holder
    printf("Enter three numbers: ");   // prompt
    scanf("%d %d %d", &a, &b, &c);     // read three ints

    max = a;                           // assume a is the largest for now
    if (b > max) max = b;              // if b beats current max, replace it
    if (c > max) max = c;              // same for c
    printf("Largest = %d\n", max);     // print the final winner
    return 0;                          // end
}
