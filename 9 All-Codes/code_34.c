// display the gc upto n terms gp-3,12,48
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++){
        a=a*4;
        printf("\n%d",a);
    }
}