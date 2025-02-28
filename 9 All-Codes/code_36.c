// display the gc upto n terms gp- 100,50,25,12,6,---n

#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a =100;
    for(int i=1;i<=n;i++){
        a=a/2;
        printf("\n%d",a);
    }
}