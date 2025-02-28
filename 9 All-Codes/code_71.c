#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
            }       
        for(int k=65;k<=65+i;k++){
             char ch = (char)k;
            printf("%c",ch);
        }printf("\n");
    }
}