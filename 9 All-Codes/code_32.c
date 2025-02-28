// display ap of 4,7,10,13,16-----n
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=4;i<=n*3+1;i=i+3){
        printf("\n%d",i);
    }
}