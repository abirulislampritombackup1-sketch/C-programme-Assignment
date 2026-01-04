// read any number x and display e to the power x.

#include<stdio.h>
#include<math.h>

int main () {
    float n,x;
    printf("Enter any base number (x):");
    scanf("%f",&n);
    printf("Enter power (e):");
    scanf("%f",&x);
    float result = pow(n,x);
    printf("pow(%f,%f) = %f",n,x,result);
    return 0;
}