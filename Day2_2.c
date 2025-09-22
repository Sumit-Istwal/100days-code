//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    float num1, num2;

    printf("enter first no \n");
    scanf("%f",&num1);
    printf("enter second no \n");
    scanf("%f",&num2);

    printf("addition: %f \n",num1+num2);
    printf("difference: %f \n",num1-num2);
    printf("product: %f \n",num1*num2);

    if (num2!=0)
        printf("quotient: %f \n",num1/num2);
    else
        printf("Error: division by 0 is not allowed \n");
    
    return 0;
}