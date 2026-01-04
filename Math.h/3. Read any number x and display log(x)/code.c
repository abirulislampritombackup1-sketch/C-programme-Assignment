// read any number x and display log(x).

#include<stdio.h>
#include<math.h>

int main () {
    float n;
    printf("Enter any number :");
    scanf("%f",&n);
    float result = log(n);
    printf(" log(%f) = %.2f \n",n,result);
    return 0;
}