// Lower to Uppercase using Library function

#include<stdio.h>
#include<ctype.h>
int main () {
    char ch;
    printf("Enter Lower case letter : ");
    scanf("%c",&ch);
    printf("The Upper case letter is :%c",toupper(ch));
    return 0;
}