#include<stdio.h>
int main(){
    int n,m;
    printf("input the no of rows : ");
    scanf("%d",&n);
    printf("input the no of coloumns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }printf("\n");
    }
}