// did it myself

#include<stdio.h>
int main(){
    int n = 3;
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int k=65;k<=i+65;k++){
            char ch = (char)k;
            printf("%c",ch);
        }
        for(int l=64+i;l>=65;l--){
            char ch = (char)l;
            printf("%c",l);
        }
        printf("\n");
    }
}