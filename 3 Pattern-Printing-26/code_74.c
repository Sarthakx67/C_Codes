#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
            }       
        for(int k=65;k<=2*i+65-2;k++){
            char ch = (char)k;
            printf("%c",ch);
        }printf("\n");
    }
}