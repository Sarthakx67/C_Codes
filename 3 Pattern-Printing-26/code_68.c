#include<stdio.h>
int main(){
    int n;
    int a;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        a = i+j;  
            if(a%2==0){
                printf("1");
            }else{printf("0");}
        }printf("\n");
    }
}