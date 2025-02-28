// wap to find power

#include<stdio.h>
int powerLog(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    int x = powerLog(a,b/2);
    if(b%2==0){
        return x*x;
    }else return a*x*x;
}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    printf("%d",powerLog(a,b));
}