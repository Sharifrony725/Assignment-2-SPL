/*
Name : Shariful Islam
ID: 222010134
Section: C
HomeWork-8
##Find Even/Odd from a given integer numbers.
*/
#include <stdio.h>
int main() {
    int T;
    printf("Enter an integer: ");
    scanf("%d", &T);
    if(T % 2 == 0)
        printf("%d is even.", T);
    else
        printf("%d is odd.", T);

    return 0;
}
