// read three numbers (a, b, c) and determine the roots of the quadratic equation.

#include<stdio.h>
#include<math.h>

int main () {
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    float d,x1,x2;
    d = sqrt((b*b)-4*a*c);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);  
    printf("The roots are X1= %f and X2= %f",x1,x2);
    return 0;
}