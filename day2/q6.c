// Q6. WAP to check if a number is prime or not. Take input from user.
// Answer:

#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }    
    }
    if(count==2){
        printf("%d is prime.", num);
    }
    else{
        printf("%d is not prime.", num);
    }
    return 0;
}
