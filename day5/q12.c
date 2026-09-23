//Q12: WAP to get the reverse of a number.
//Solution:

#include<stdio.h>
int main(){
    int num,sum=0,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
        r=num%10;
        sum=sum*10+r;
        num/=10;
    }
    printf("Reverse of the number is: %d", sum);
    return 0;
}