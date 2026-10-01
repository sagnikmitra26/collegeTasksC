// Q20: WAP to print factorial of a number.
// Solution:

#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter a number to find it's factorial: ");
    scanf("%d",&num);
    while(num>=1){
        fact*=num;
        num--;
    }
    printf("Factorial of the number is %d.",fact);
    return 0;
}