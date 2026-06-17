// Write a program to print repeated character Pattern.
// A
// B B
// C C C
// D D D D
// E E E E E

#include <stdio.h>
#include<conio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}