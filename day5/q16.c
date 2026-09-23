//Q16: WAP to print all armstrong numbers within given limit.
//Solution:

#include<stdio.h>
#include<math.h>
int main(){
    int lower,upper,temp,count,r,sum=0;
    printf("Enter lower and upper limit: ");
    scanf("%d %d",&lower,&upper);
    printf("Armstrong numbers between %d and %d are:\n",lower,upper);
    for(int i=lower; i<=upper; i++){
        count=0;
        sum=0;
        temp=i;
        while(temp>0){
            temp/=10;
            count++;
        }
        temp=i;
        while(temp>0){
            r=temp%10;
            sum+=pow(r,count);
            temp/=10;
        }
        if(i==sum){
            printf("%d ",i);
        }
    }
    return 0;
}