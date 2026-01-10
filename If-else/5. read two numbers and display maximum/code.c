// read two numbers and display maximum

#include<stdio.h>
int main () {
    float num1,num2;
    printf("Enter any two numbers:");
    scanf("%f %f",&num1,&num2);
    if ( num1>num2 ) {
        printf("%f is maximum\n",num1);
    } else if ( num2>num1 ) {
        printf("%f is maximum\n",num2);
    } else {
        printf("Numbers are equal");
    }
    return 0;
}