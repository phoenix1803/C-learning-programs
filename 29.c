#include <stdio.h>
#include <math.h>
    int main() {
    int remainder,num,orignialnum;
    int result ; 
    printf("Enter any Number:");
    scanf("%d",&num);
    orignialnum = num;
    while(orignialnum != 0) {
        remainder = orignialnum %10; 
        result += remainder*remainder*remainder;
        orignialnum /= 10;
    }
    if (result == num ) {
        printf("The given number is an Armstrong number!");
    } else {
        printf("The given number is not an Armstrong number!");
    }
    return 0;
}