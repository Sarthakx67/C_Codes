// // MAZEPATH // DIFFICULT OR COMPLEX TO UNDERSTAND
// // second method

// #include<stdio.h>
// int maze(int n,int m){
//     int rightways = 0;
//     int downways = 0;
//     if(n==1 && m==1)return 1;
//     if(n==1){
//         rightways += maze(n,m-1);
//     }
//     if(m==1){
//         downways += maze(n-1,m);
//     }
//     if(n>1 && m>1){
//         rightways += maze(n,m-1);
//         downways += maze(n-1,m);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int m;
//     scanf("%d",&m);
//     int noOfWays = maze(n,m);
//     printf("%d",noOfWays);  
//     return 0;
// }

// did it myself 

#include<stdio.h>
int maze2(int m,int n){
    int rightways = 0;
    int downways = 0;
    if(m==1 && n==1){
        return 1;
    }
    if(m==1){
        rightways += maze2(m,n-1);
    }
    if(n==1){
        downways += maze2(m-1,n);
    }
    if(m>1&&n>1){
        rightways += maze2(m,n-1);
        downways += maze2(m-1,n);
    }
    int totalways = rightways + downways;
    return totalways;
    
}
int main(){
    int m;
    printf("enter no of rows : ");
    scanf("%d",&m);
    int n;
    printf("enter no of rows : ");
    scanf("%d",&n);
    int totalWays = maze2(m,n);
    printf("%d",totalWays);
}