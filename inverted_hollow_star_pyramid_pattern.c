// C Program to print inverted hollow star pyramid pattern
#include <stdio.h>
int main() {
    int i, j, n, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (space = i; space < n; space++) 
            printf(" ");
        // Print stars and spaces
        for (j = (2 * i - 1); j >= 1; j--) {
            if (i == n || j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}