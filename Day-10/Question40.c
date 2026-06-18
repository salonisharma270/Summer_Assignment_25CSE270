// Write a program to print character pyramid.
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        ch = 'A';
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", ch);
            ch++;
        }
        ch-=2;
        for (int l = i - 1; l >= 1; l--)
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}