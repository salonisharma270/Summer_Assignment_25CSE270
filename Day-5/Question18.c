// Write a program to check strong number.

#include <stdio.h>
#include <conio.h>

int main(){
    int num, originalNum, remainder, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        int factorial = 1;
        for (int i = 1; i <= remainder; ++i)
        {
            factorial *= i;
        }
        result += factorial;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}