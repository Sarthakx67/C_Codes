// printing //A B C D 
            //A B C D
            //A B C D
            //A B C D 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int ltchar = 65+n;
        for(int j=65;j<=ltchar;j++){
            char ch = (char)j;
            printf("%c ",ch);
        }printf("\n");
    }
}