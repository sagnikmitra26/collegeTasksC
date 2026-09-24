//Q17: WAP to convert a decimal number to it's binary equivalent.
// Solution:

#include<stdio.h>
int main(){
    int num,r,sum=0,i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        r=num%2;
        sum+=r*i;
        i*=10;
        num/=2;
    }
    printf("Binary equivalent of the given decimal is %d", sum);
    return 0;
}