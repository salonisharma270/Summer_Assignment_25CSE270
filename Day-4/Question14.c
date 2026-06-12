// Write a program to find nth fibonacci term.

#include <stdio.h>
#include <conio.h>

int main(){
    int n, first = 0, second = 1, next;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, first);
    } else if (n == 1) {
        printf("The %dth term in the Fibonacci series is: %d\n", n, second);
    } else {
        for (int i = 2; i <= n; ++i)
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth term in the Fibonacci series is: %d\n", n, next);
    }

    return 0;
}