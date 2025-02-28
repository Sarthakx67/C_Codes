// did it myself

#include<stdio.h>
int main(){
    int n =4;
    int a =7;
    for(int m=1;m<=1;m++){
        for(int o=1;o<=a;o++){
            printf("*");
        }printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=n-i+1;j>=1;j--){
            printf("*");
        }
        for(int k=2;k<=2*i-2;k++){
            printf(" ");
        }
        for(int l=n-i+1;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
}