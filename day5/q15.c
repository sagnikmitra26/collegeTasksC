//Q15:  WAP to check if a number is armstrong or not.
//Solution:

#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0,temp,r,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=num;
    while(temp>0){
        r=temp%10;
        sum+=pow(r,count);
        temp/=10;
    }
    if(num==sum){
        printf("%d is an armstrong number.",num);
    }
    else{
        printf("%d is not an armstrong number.",num);
    }
    return 0;
}