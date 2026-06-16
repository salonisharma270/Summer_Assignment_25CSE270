// Write a program to print character triangle.
// A
// A B
// A B C
// A B C D
// A B C D E


#include <stdio.h>
#include <conio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}