// read any number and display its square root.

#include<stdio.h>
#include<math.h>

int main () {
    float n;
    printf("Enter any number :");
    scanf("%f",&n);
    float result = sqrt(n);
    printf(" sqrt(%f) = %.2f",n,result);
    return 0;
}