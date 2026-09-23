// Q14: WAP to find sum of digits of a number.
// Solution:

#include<stdio.h>
int main(){
    int num,sum=0,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
    printf("Sum of the digits of the number is %d.",sum);
    return 0;
}