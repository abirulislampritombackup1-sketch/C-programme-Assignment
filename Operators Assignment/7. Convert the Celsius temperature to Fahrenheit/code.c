// Celsius to Fahrenheit

#include<stdio.h>
int main () {
    float c;
    printf("Enter the temparature in celsius:");
    scanf("%f",&c);
    float f=((9/5)*c)+32;
    printf("The temparature in fahrenheit = %f",f);
    return 0;
}