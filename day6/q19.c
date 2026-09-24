//Q19: WAP to find the sum of the series upto n.
//      S=1-2+3-4+5-6+7-8.....
//Solution:

#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum-=i;   
        }
        else{
            sum+=i;
        }
        i++;
    }
    printf("Sum of the series upto %d is %d",n,sum);
    return 0;
}