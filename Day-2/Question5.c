// Write a program to find sum of digits of a number.

#include <stdio.h>
#include<conio.h>

int main(){
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10; 
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}