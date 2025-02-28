// wap to print the row number which have the maximum sum in the given matrix

#include<stdio.h>
int main(){
    int arr[3][4] ={{1,2,3,4},{5,4,3,2},{3,4,1,1}};
    int a = 0;
    int ai;
    int b = 0;
    int bi;
    int c = 0;
    int ci;
    for(int i=0;i<1;i++){
        for(int j=0;j<4;j++){
            a = a + arr[i][j];
            ai = i+1;            
        }
    }
    for(int i=1;i<2;i++){
        for(int j=0;j<4;j++){
            b += arr[i][j];
            bi = i+1;
        }
    }
    for(int i=2;i<3;i++){
        for(int j=0;j<4;j++){
            c += arr[i][j];
            ci = i+1;
        }
    }
    printf("%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
    if(a>b && a>c) printf("\nthe row number which have the maximum sum in the given matrix : %d",ai);
    else if(b>a && b>c) printf("\nthe row number which have the maximum sum in the given matrix : %d %d",b,bi);
    else if(c>b && c>a) printf("\nthe row number which have the maximum sum in the given matrix : %d",ci);
}