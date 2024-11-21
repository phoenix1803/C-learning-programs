#include<stdio.h>

int main(){
    float temp,conv;
    printf("Enter the temperature in degree celsius :");
    scanf("%f",&temp);
    conv=(temp*9/5)+32;
    printf("The temperature in fahrenheit : %.1f",conv);

    return 0;
}