// Write a program to pirnt repeated-number pattern.
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <stdio.h>
#include <conio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
