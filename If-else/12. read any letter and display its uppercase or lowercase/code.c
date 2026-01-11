// read any letter and display its uppercase or lowercase

#include<stdio.h>
int main () {
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if ( ch>='A' && ch<='Z' ) {
        printf("Uppercase\n");
    } else if ( ch>='a' && ch<='z' ) {
        printf("Lowercase\n");
    } else {
        printf("Invalid letter ");
    }
    return 0;
}