// read any angle t and display sin (t)

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main () {
    float t;
    printf("Enter the angle in degree :");
    scanf("%f",&t);
    float t_radian = t*(PI/180);
    float result = sin(t_radian);
    printf("sin(%f) = %.2f \n",t,result);
    return 0;
}