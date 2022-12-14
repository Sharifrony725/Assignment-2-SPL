/*
Name : Shariful Islam
ID: 222010134
Section: C
HomeWork-7
#Write a C program to find the Simple Interest
*/
#include<stdio.h>

int main() {

  float principal, rate, time;
  printf("Enter the principal amount: ");
  scanf("%f", & principal);
  printf("Enter the rate of interest: ");
  scanf("%f", & rate);
  printf("Enter the time: ");
  scanf("%f", & time);

  float simple_interest, amount;
  simple_interest = ((principal * rate * time) / 100);
  amount = simple_interest + principal;
  printf("Simple Interest = %f \nAmount = %f", simple_interest, amount);
  return 0;
}
