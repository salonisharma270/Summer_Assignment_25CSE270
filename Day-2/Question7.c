// Write a program to find product of digits.

#include <stdio.h>
#include <conio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        product *= n % 10;
        n /= 10; 
    }

    printf("Product of the digits is: %d\n", product);

    return 0;
}