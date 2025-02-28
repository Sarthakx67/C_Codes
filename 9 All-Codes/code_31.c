// display ap of 1,3,5,7-----n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*2;i=i+2){
        printf("\n%d",i);
    }
}