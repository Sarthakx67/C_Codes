// display gp of 2,4,8,16,32-----n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){  
         a = a*2;
      printf("\n%d",a);
    } 
}