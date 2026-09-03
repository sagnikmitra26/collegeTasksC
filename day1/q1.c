// Q1. WAP to find sum of two numbers. Take input from user.
// Solution:

#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter two numbers:");
    scanf("%d %d",&num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}