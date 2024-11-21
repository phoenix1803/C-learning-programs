#include<stdio.h>
 int main()
 {
    int  i,j,k,num ;
    printf("enter the number of lines you want to print:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(k=0;k<=num-i;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("* ");

        }
        printf("\n");
    
    }
    for(i=1;i<=num;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    
 }