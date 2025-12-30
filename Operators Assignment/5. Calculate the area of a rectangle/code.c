// Area of a rectangle

#include<stdio.h>
int main () {
    float a,b;
    printf("Enter the length: ");
    scanf("%f",&a);
    printf("Enter the bradth: ");
    scanf("%f",&b);
    float area = a*b;
    printf("The area of the rectangle is : %f",area);
    return 0;
}