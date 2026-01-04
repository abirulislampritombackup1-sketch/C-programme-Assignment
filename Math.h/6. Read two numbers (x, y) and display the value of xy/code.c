// read two numbers (x, y) and display the value of xy

#include<stdio.h>
#include<math.h>

int main () {
    float x,y;
    printf("Enter the value of x and y :");
    scanf("%f %f",&x,&y);
    float result = x*y;
    printf("Answer = %.2f",result);
    return 0;
}