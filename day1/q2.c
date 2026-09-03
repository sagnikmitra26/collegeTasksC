// Q2. Convert Celcius to Fahrenheit. Take input from user.
// Solution:

#include<stdio.h>
int main(){
    float fahrenheit, celcius;
    printf("Enter temparature in celcius: ");
    scanf("%f",&celcius);
    fahrenheit = ((9*celcius)/5)+32;
    printf("In fahrenheit scale temparature is %.2f degrees.\n", fahrenheit);
    return 0;
}