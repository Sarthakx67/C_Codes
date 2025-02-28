// program to tell if input is divisible by both 5 and 3
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
        if(n%5==0 && n%3==0){
            printf("it is divisible by both 5 and 3");
        }else{printf("it is not divisible by 5 and 3");}
}