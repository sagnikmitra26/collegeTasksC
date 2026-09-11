// Q7. Find the gretest number among three numbers.
// solution:

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is gretest.", a);
        }
        else{
            printf("%d is gretest.", c);
        }
    }
    else{
        if(b>c){
            printf("%d is gretest.", b);
        }
        else{
            printf("%d is gretest.", c);
        }
    }
    return 0;
}