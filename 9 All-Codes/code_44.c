// wap to print reverse of a given number

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int lastdigit;
    int sum = 0;
    while(n>0){
        lastdigit = (n%10)*10;
        sum = (sum*10 + lastdigit);
        n = n/10;
    }printf("%d",sum/10);
}