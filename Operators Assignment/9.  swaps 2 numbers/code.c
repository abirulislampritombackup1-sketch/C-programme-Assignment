// Swap two numbers

#include<stdio.h>
int main () {
    int a,b,temp;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    temp=b;
    b=a;
    a=temp;
    printf("The first number is :%d \n",a);
    printf("The second number is :%d",b);
    return 0;
}