// wap to print alphabet and number triangle

#include<stdio.h>
int main(){
    int n=4;
    int b=n;
        for(int i=0;i<=b;i++){
            if(i%2==0){
            for(int j=65;j<=i+64;j++){
            char ch = (char)j;
            printf("%c ",ch);
            }
        }else{
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }printf("\n");
    }
}