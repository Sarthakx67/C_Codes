// program to tell if input id divisible by 3 or by 5

#include <stdio.h>
int main(){
    int a;
    printf("input number : ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        printf("it is divisible by 3 or 5");
    }
}