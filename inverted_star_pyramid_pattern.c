// C program to print inverted star pyramid pattern
#include<stdio.h>
int main(){
    int n, s, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        //for loop to put space
        for(s=i;s<n;s++){
            printf(" ");
        }
        //for loop for displaying star
        for(j=(2*i-1);j>=1;j--){
            printf("*");
        }
        //ending line after each row
        printf("\n");
    }
    return 0;
}