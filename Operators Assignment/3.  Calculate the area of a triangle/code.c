// The area of a triangle 

#include<stdio.h>
int main () {
    float a,b;
    printf("Enter the base of the triangle:");
    scanf ("%f",&a);
    printf("Enter the height of the triangle:");
    scanf("%f",&b);
    float area = (float) 1/2 * a * b;
    printf("The area of the triangle is = %f",area);
    return 0;
}