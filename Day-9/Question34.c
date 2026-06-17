// Write a program to print reverse number traingle.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
#include<conio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}