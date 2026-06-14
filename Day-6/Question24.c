// Write a program to find x^n without pow().

#include <stdio.h>
#include <conio.h>

int main() {
    double x, result = 1.0;
    int n;

    printf("Enter a number (x): ");
    scanf("%lf", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    printf("%.2lf raised to the power of %d is: %.2lf", x, n, result);
    
    return 0;
}