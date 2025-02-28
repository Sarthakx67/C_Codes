//print the given pattern -- A B C D
                           //A B C D 
                           //A B C D 
                           //A B C D 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=65;j<=i+65;j++){
            char ch = (char)j;
            printf("%c ",ch);
        }printf("\n");
    }
}