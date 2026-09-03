// Q3. Swap two numbers using a third variable. Take inputs from user.
// Solution:

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Original values: a=%d, b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values: a=%d, b=%d \n",a,b);
    return 0;
}