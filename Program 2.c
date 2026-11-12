#include <stdio.h>
int main() {
    int a, b, diff;                     // 'diff' = difference
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    diff = a - b;                       // subtract
    printf("Difference = %d\n", diff);
    return 0;
}
