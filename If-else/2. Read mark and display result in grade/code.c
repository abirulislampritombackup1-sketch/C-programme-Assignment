// read mark and display result in grade.

#include<stdio.h>
int main () {
    int mark;
    printf("Enter any mark:");
    scanf("%d",&mark);
    if ( mark>=80 ) {
        printf("Grade= A+");
    } else if ( mark>=75 ) {
        printf("Grade= A");
    } else if ( mark>=70 ) {
        printf("Grade= A-");
    } else if ( mark>=65 ) {
        printf("Grade= B");
    } else if ( mark>=60 ) {
        printf("Grade= C");
    } else if ( mark>=50 ) {
        printf("Grade= D");
    } else if ( mark>=40 ) {
        printf("Grade= E");
    } else {
        printf("Fail");
    }
    return 0;
}