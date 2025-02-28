// number zoom

#include<stdio.h>
int main(){
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==7||j==7){
                printf("4");
            }
            else if(i==2||j==2||i==6||j==6){
                printf("3");
            }
            else if(i==3||j==3||i==5||j==5){
                printf("2");
            }
            if(i==4 && j==4){
                printf("1");
            }
        }printf("\n");
    }
}