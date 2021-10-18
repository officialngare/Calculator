#include <stdio.h>
#include <conio.h>
 
int main(){
    /* Variable declation */
    int a,b, sum, difference, product, modulo;
    float quotient;
     
    /* Taking input from user and storing it in firstNumber and secondNumber */
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
     
    /* Adding two numbers */
    sum = a + b;
    /* Subtracting two numbers */
    difference = a - b;
    /* Multiplying two numbers*/
    product = a * b;
    /* Dividing two numbers by typecasting one operand to float*/
    quotient = (float)a/b;
    /* returns remainder of after an integer division */
    modulo = a%b;
     
    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);
     
    getch();
    return 0;
}