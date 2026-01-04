// read any number x and display log10(x)

#include<stdio.h>
#include<math.h>

int main () {
    float n;
    printf("Enter any number :");
    scanf("%f",&n);
    float result = log10(n);
    printf("log10(%f) = %.2f",n,result);
    return 0;
}