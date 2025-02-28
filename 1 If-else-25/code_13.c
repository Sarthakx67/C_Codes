// program to find leap year

// if its is divisible by 4 then year is a leap year
// if it is divisible by 100 then it also should be divisible 
// by 400 for it to be a leap year

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("it is a leap year\n");
        if(n/400){
            if(n/100){
                printf("it is a leap year");
            }else printf("it is not a leap year");
        }
    }else printf("not a leap year");
}