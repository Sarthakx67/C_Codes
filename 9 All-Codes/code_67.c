#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum = sum + 1;
            printf("%d ",sum);
        }printf("\n");
    }
}