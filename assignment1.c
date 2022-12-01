#include<stdio.h>
int main(){
     /* Variable declation */
    int firstNumber, secondNumber;
    int addition, subtraction, multiplication , division;

    /* Taking input from user and storing it in firstNumber and secondNumber */
    printf("Enter First Number: ");
    scanf("%d", &firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);

    /* Adding two numbers */
    addition = firstNumber + secondNumber;
    /* Subtracting two numbers */
    subtraction = firstNumber - secondNumber;
    /* Multiplying two numbers*/
    multiplication  = firstNumber * secondNumber;
    /* Dividing two numbers by typecasting one operand to float*/
    division  = firstNumber / secondNumber;


    printf("\nAddition = %d", addition);
    printf("\nSubtraction  = %d", subtraction);
    printf("\nMultiplication = %d", multiplication);
    printf("\nDivision = %d", division);

    return 0;
}
