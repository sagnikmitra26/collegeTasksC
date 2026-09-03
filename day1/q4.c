// Q. Swap two numbers without using a third variable.
// Solution:

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Original values: a=%d, b=%d \n",a,b);
    a+=b;
    b=a-b;
    a-=b;
    printf("Swapped values: a=%d, b=%d \n",a,b);
    return 0;
}