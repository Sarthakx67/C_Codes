// wap to print sum of all even digit of a given numbers

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int lastdigit;
    int sum = 0;
    while(n!=0){
            lastdigit = n%10;
        if(lastdigit%2==0){
            sum = sum + lastdigit;
        }
        n = n/10;
    }printf("%d",sum);
}