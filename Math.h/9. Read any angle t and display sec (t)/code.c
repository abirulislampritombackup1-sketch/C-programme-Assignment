// read any angle t and display sec (t).

#include<stdio.h>
#include<math.h>
#define PI 3.1416

    float t;
    printf("Enter any angle t in degree:");
    scanf("%f",&t);
    float t_radian = t*(PI/180);
    float result = sec(t_radian);
    printf("sec(%f) = %f",t,result);
    return 0;
}