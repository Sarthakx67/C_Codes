// program to find leap year

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