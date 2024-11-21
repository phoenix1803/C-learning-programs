#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number entered in even");
    }
    else{
        printf("The number entered is odd");
    }

    return 0;
}
