//Q13: WAP to find whether the given number is palindrome.
//Solution:

#include<stdio.h>
int main(){
    int num,temp,sum=0,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(temp>0){
        r=temp%10;
        sum=sum*10+r;
        temp/=10;
    }
    if(num==sum){
        printf("%d is palindrome.",num);
    }
    else{
        printf("%d is not palindrome.",num);
    }
    return 0;
}