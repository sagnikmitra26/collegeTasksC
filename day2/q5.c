// Q. WAP to check a year is leap year or not. Take input from user.
// Answer:

#include<stdio.h>
int main(){
     int year;
     printf("Enter a year to check: ");
     scanf("%d",&year);
     if(year%400==0 || year%4==0 && year%100!=0){
        printf("Year %d is a leap year.");
     }
     else{
        printf("Year %d is not a leap year.");
     }
     return 0;
}