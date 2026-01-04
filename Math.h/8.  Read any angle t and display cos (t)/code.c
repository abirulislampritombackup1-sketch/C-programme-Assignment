//  read any angle t and display cos (t).

#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main () {
    float t;
    printf("Enter any angle in degree t :");
    scanf("%f",&t);
    float t_radian = t*(PI/180);
    float result = cos(t_radian);
    printf("cos(%f) = %.2f",t,result);
    return 0;
}