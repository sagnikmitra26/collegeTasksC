// Q8. Find grades depending upon marks obtained.
// Solution:

#include<stdio.h>
int main(){
    float mark;
    printf("Enter marks obtained: ");
    scanf("%f", &mark);
    if(mark>=0 && mark<30){
        printf("Grade: F");
    }
    else if(mark>=30 && mark<50){
        printf("Grade: D");
    }
    else if(mark>=50 && mark<70){
        printf("Grade: C");
    }
    else if(mark>=70 && mark<80){
        printf("Grade: B");
    }
    else if(mark>=80 && mark<90){
        printf("Grade: A");
    }
    else if(mark>=90 && mark<=100){
        printf("Grade: A+");
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}