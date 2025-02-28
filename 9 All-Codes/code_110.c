// wap to find total ways in a maze path

#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int downways = 0;
    int rightways = 0;
    if(cr==er && cc==ec)return 1;
    if(cr==er){
        downways += maze(cr,cc+1,er,ec); 
    }
    if(cc==ec){
        rightways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        downways += maze(cr,cc+1,er,ec);
        rightways += maze(cr+1,cc,er,ec);
    }
    int totalways = downways + rightways;
    return totalways;
}
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int totalways = maze(1,1,n,m);
    printf("%d",totalways);
}