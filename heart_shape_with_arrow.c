// C program to print heart with arrow
#include <stdio.h>
int main() {
    int i, j;
    int n = 5;
    for(i=0; i<=0;i++){
        for(j=1;j<=20;j++){
            if(j>=15-i && j<=18-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0; i<=0;i++){
        for(j=1;j<=20;j++){
            if(j>=17-i && j<=18-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0; i<=0;i++){
        for(j=1;j<=20;j++){
            if(j>=16-i && j<=16-i || j>=18-i && j<=18-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    
    }
    for(i=0; i<=3;i++){
        for(j=1;j<=20;j++){
            if(j>=4-i && j<=5+i || j>=13-i && j<=14+i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0; i<=4;i++){
        for(j=1;j<=20;j++){
            if(j>=1+i && j<=17-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0; i<=2;i++){
        for(j=1;j<=20;j++){
            if(j>=5-i && j<=5-i || j>=6+i && j<=12-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0; i<=0;i++){
        for(j=1;j<=20;j++){
            if(j>=2-i && j<=2-i|| j>=9-i && j<=9-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}