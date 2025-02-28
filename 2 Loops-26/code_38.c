// wap to print odd numbers using CONTINUE statement

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }printf("\n%d",i);
    }
}