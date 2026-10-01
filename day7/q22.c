// Q21: WAP to print the given pattern.
//      * * * *
//      * * *
//      * *
//      *
// Solution:

#include<stdio.h>
int main(){
    for(int i=0;i<4;i++){           // i=0 because in the 2nd loop I needed to calculate j=4-i
        for(int j=1;j<=4-i;j++){    // if i took i=1 the first line would print 3 stars in first row
            printf("* ");           // but expected output requires 4 stars in first row
        }
        printf("\n");
    }
    return 0;
}