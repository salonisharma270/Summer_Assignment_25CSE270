// Write a program to count set bits in a number.

#include <stdio.h>
#include <conio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num & 1; 
        num >>= 1; 
    }

    printf("Number of set bits: %d", count);
    
    return 0;
}