//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
    int sec,hrs,min;
    printf("Enter time in seconds:\n");
    scanf("%d",&sec);

    hrs=sec/3600;
    min=(sec/3600)%60;
    sec=sec%60;

    printf("Time = %d:%d:%d\n", hrs, min, sec);

    return 0;
}