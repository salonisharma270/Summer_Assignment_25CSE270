// Write a program to find largest prime factor.

#include <stdio.h>
#include <conio.h>

int main(){
    int num, largestFactor = -1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0)
        {
            largestFactor = i;
            num /= i;
        }
    }

    if (largestFactor != -1)
        printf("Largest prime factor is: %d\n", largestFactor);
    else
        printf("No prime factors found.\n");

    return 0;
}