#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t,si,ci;
    printf("Enter the principal, rate, time :");
    scanf("%f,%f,%f",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p* pow((1+r/100),t)-p;

    printf("Simple interest : %f\n",si);
    printf("Compound interest : %f\n",ci);

    return 0;
}