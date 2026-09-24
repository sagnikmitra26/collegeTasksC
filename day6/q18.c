//Q18: WAP to convert a binary number to it's decimal equivalent.
//Solution:

#include<stdio.h>
#include<math.h>
int main(){
    int num,r,i=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        r=num%10;
        sum+=r*pow(2,i);
        i++;
        num/=10;
    }
    printf("Decimal equivalent of the given binary is %d", sum);
    return 0;
}