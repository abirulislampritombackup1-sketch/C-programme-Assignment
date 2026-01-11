//read three numbers and display minimum

#include<stdio.h>
int main () {
    int num1,num2,num3;
    printf("Enter any three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if ( num1<num2 && num1<num3 ) {
        printf("%d is minimum",num1);
    } else if ( num2<num1 && num2<num3 ) {
        printf("%d is minimum",num2);
    } else if ( num3<num2 && num3<num1 ) {
        printf("%d is minimum",num3);
    } else {
        printf("All numbers are equal");
    }
    return 0;
}