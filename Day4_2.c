//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>
int main(){
    int i=0,s=0,n;
    printf("Enter the number till you want the sum\n");
    scanf("%d",&n);

    while(i<=n){
        s=s+i;
        i++;
    }
    printf("Sum:%d",s);
    return 0;
}