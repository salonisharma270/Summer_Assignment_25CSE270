// Write a program to count digits in a number.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            n /= 10; // Remove the last digit
            count++; // Increment the count
        }
    }

    printf("Number of digits in the given number is: %d\n", count);

    return 0;
}