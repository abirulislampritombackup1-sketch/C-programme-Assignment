// Uppercase to Lowercase letter using library function

#include<stdio.h>
#include<ctype.h>
int main () {
    char ch;
    printf ("Enter a Uppercase letter :");
    scanf("%c",&ch);
    printf ("The lowercase letter is :%c",tolower(ch));
    return 0;
}