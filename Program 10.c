#include <stdio.h>                     // I/O header
int main() {                           // entry point
    int year;                          // year to check
    printf("Enter a year: ");          // prompt
    scanf("%d", &year);                // read

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {  // leap rule
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }
    return 0;                          // end
}
