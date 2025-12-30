// Fahrenheit to celsius 

#include<stdio.h>
int main () {
    float f;
    printf("Enter the temparature in fahrenheit:");
    scanf("%f",&f);
    float c = (5/9)*(f-32);
    printf("The temparature in celsius = %f",c);
    return 0;
}