// wap to print roll no and mark obtaine from 4 students side by side

#include<stdio.h>
int main(){
    int r = 4;
    int c = 2;
    int a[4][2];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }   
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}