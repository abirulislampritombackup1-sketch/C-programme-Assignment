// Write a program to read any integer and display its absolute value.

#include<stdio.h>
#include<math.h>

int main () {
    int n;
    printf("Enter any integer ");
    scanf("%d",&n);
    int result = abs(n);
    printf("The absolute value abs(%d) = %d",n,result);
    return 0;
}