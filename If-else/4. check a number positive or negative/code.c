// check a number positive or negative

#include<stdio.h>
int main () {
    float x;
    printf("Enter any number:");
    scanf("%f",&x);
    if ( x>=0 ) {
        printf("%.2f is positive",x);
    } else {
        printf("%.2f is negative",x);
    }
    return 0;
}