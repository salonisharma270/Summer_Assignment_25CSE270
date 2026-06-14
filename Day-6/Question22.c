// Write a program to convert binary to decimal.

#include <stdio.h>
#include<conio.h>

int main(){
    int binaryNum[32], decimalNum = 0, base = 1, i = 0, num;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        binaryNum[i] = num % 10;
        num = num / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        decimalNum += binaryNum[j] * base;
        base *= 2;
    }

    printf("Decimal representation: %d", decimalNum);
    
    return 0;
}