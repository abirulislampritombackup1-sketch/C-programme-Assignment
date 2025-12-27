#include<stdio.h>
int main (){
    int a;
    float b;
    double c;
    char d;
    printf("Enter Integer:\n");
    scanf("%d",&a);
    printf("Enter Float:\n");
    scanf("%f",&b);
    printf("Enter Double:\n");
    scanf("%lf",&c);
    printf("Enter Character:\n");
    scanf(" %c",&d);// In this line an extra space is printed before %c. It is because if we don't use an extra space the %c will consider the previous line input \n as a input.
    printf("Ths size of Integer is : %zu \n",sizeof(a));
    printf("The size of Float is : %zu \n",sizeof(b));
    printf("The size of Double is :%zu \n",sizeof(c));
    printf("The size of Character is : %zu \n",sizeof(d));
    return 0;
}