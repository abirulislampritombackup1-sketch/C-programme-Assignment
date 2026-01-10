// read three numbers and display maximum.

#include<stdio.h>
int main () {
    int num1,num2,num3;
    printf("Enter any three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if ( num1>num2 && num1>num3 ) {
        printf("%d is maximum\n",num1);
    } else if ( num2>num1 && num2>num3 ) {
        printf("%d is maximum\n",num2);
    } else if ( num3>num1 && num3>num2 ) {
        printf("%d is maximum\n",num3);
    } else if ( num1==num2 && num2==num3 ) {
        printf("All Numbers are equal\n");
    } else if ( num1==num2 ) {
        printf("First and Second numbers are equal\n");
    } else if ( num1==num3 ) {
        printf( "First and Third numbers are equal\n");
    } else if ( num2==num3 ) {
        printf( "Second and Third numbers are equal\n");
    }
    
    return 0;
}