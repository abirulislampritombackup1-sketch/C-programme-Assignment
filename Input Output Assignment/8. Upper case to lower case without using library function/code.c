// Upper case to Lower case letter without using library function

#include<stdio.h>
int main () {
    char ch; 
    printf("Enter the Upper case letter :");
    scanf("%c",&ch);
    printf("The lowercase letter is:%c",ch+32);
    return 0;
}