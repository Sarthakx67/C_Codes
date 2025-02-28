// wap to print numbers from increasing to decreasing order 

#include<stdio.h>
void increasing (int n,int s){
    if(n==0){return;}
    printf("%d\n",s);
    increasing(n-1,s+1);
    printf("%d\n",s);
    return;
}
int main(){
    int n ;
    scanf("%d",&n);
    int s = 1;
    increasing(n,s);
}