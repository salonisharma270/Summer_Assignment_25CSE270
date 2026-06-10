// Write a program to check whether a number is palindrome.

#include <stdio.h>
#include <conio.h>

int main() {
    int n, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // Store the original number

    while (n > 0) {
        reversed = reversed * 10 + n % 10; // Build the reversed number
        n /= 10; // Remove the last digit
    }

    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}