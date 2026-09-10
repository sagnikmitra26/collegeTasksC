// Q9. Find grades depending upon marks obtained using switch case.
// Solution:

#include<stdio.h>
int main(){
    int mark;
    printf("Enter obtained marks: ");
    scanf("%d", &mark);
    if(mark<0 || mark>100){
        printf("Invalid input.");
        return 1;
    }
    switch(mark/10){
        case 10:
        case 9:
            printf("Grade: A+");
            break;
        case 8:
            printf("Grade: A");
            break;
        case 7:
            printf("Grade: B");
            break;
        case 6:
        case 5:
            printf("Grade: C");
            break;
        case 4:
        case 3:
            printf("Grade: D");
            break;
        default:
            printf("Grade: F");
            break;
    }
    return 0;
}