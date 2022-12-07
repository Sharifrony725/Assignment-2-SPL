/*
Name : Shariful Islam
ID: 222010134
Section: C
HomeWork:5
*Sum all the prime numbers between 2 and 100
*/
#include<stdio.h>

int main()

{

    int i, j, sum=0, flag;

    for(i=2; i<=100; i++){

        flag = 1;

    for(j=2; j<=i/2; j++) {

        if(i%j==0) {

        flag=0;

        break;

        }

    }

    if(flag==1)

    sum = sum + i;

}

    printf("Sum = %d", sum);

return 0;

}
