#include<stdio.h>


int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a>0){
        printf("The number entered is positive");
    }
    else if(a==0){
        printf("The number entered is 0");
    }
    else{
        printf("The number entered is negative");
    }
    return 0;
}
