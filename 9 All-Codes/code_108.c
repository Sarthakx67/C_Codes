#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int pow = a * power(a,b-1);
    return pow;
}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    printf("%d",power(a,b));
}