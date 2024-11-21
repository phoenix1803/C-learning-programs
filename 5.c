#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,disc,r1,r2;
    printf("Enter the coefficients a,b,c :");
    scanf("%f,%f,%f",&a,&b,&c);
    disc=b*b-4*a*c;

    if(disc>0){
        r1=(-b+ sqrt(disc))/(2*a);
        r2=(-b- sqrt(disc))/(2*a);
        printf("Roots are real and distinct : %f,%f",r1,r2);
    }

    else if(disc==0){
        r1=(-b/(2*a));
        printf("Roots are real and equal : %f,%f",r1,r1);
    }

    else{
        float real = -b/(2*a);
        float imag = sqrt(-disc/(2*a));
        printf("Roots are complex : %f +%fi,%f-%fi",real,imag,real,imag);

    }
    return 0;
}