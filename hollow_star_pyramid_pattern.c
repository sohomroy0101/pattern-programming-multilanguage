//C Program to print Hollow Star Pyramid Pattern
#include <stdio.h>
int main() {
    int r, i, j, space;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for(i = 1; i <= r; i++) {
        //for loop for printing spaces
        for(space = i; space < r; space++)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++) {
            if(i == r || j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}