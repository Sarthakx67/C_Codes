//wap tp print the sum of given number and its reverse

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n;
    int lastdigit;
    int sum = 0;
    int add;
    while(n!=0){
        lastdigit = (n%10)*10;
        sum = (sum*10)+lastdigit;
        n = n/10;
    }add = (sum/10)+a;
    printf("%d",add);
}