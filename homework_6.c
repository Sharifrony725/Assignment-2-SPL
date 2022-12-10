/*
Name : Shariful Islam
ID: 222010134
Section: C
HomeWork:06
*Sum the series:  1 + 1/2 + 1/3 + 1/4 + ....+ 1/N
*The value of N will be given by user.
*/

#include<stdio.h>

int main() {
  int num, i, sum = 0;
  printf("Input any number: ");
  scanf("%d", & num);
  printf("1 + ");
  for (i = 2; i <= num - 1; i++)
    printf(" 1/%d +", i);
  for (i = 1; i <= num; i++)
    sum = sum + i;
  printf(" 1/%d", num);
  printf("\nSum = 1/%d", sum + 1 / num);
  return 0;
}

