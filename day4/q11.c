// Q11: WAP to check if a number is perfect or not.
// solution:

#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+= i;
        }
    }
    if(sum==num){
        printf("%d is a perfect number.");
    }
    else{
        printf("%d is not a perfect number.");
    }
    return 0;
}