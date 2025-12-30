// calculate the area of a triangle, 3 sides length are given.

#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c;
    printf("Enter the lengths of three sides :\n");
    scanf("%f %f %f",&a,&b,&c);
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is = %f",area);
    return 0;
}