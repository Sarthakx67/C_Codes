// // // // MAZEPATH // DIFFICULT OR COMPLEX TO UNDERSTAND

// // // #include<stdio.h>
// // // int maze(int cr,int cc,int er,int ec){
// // //     int rightways = 0;
// // //     int downways = 0;
// // //     if(cr==er && cc == ec)return 1;
// // //     if(cr==er){
// // //         rightways += maze(cr,cc+1,er,ec);
// // //     }
// // //     if(cc==ec){
// // //         downways += maze(cr+1,cc,er,ec);
// // //     }
// // //     if(cr<er && cc<ec){
// // //         rightways += maze(cr,cc+1,er,ec);
// // //         downways += maze(cr+1,cc,er,ec);
// // //     }
// // //     int totalways = rightways + downways;
// // //     return totalways;
// // // }
// // // int main(){
// // //     int n;
// // //     scanf("%d",&n);
// // //     int m;
// // //     scanf("%d",&m);
// // //     int noOfWays = maze(1,1,n,m);
// // //     printf("%d",noOfWays);  
// // //     return 0;
// // // }

// // #include<stdio.h>
// // int maze(int cr,int cc,int er,int ec){
// //     int downways = 0;
// //     int rightways = 0;
// //     if(cr==er && cc == ec){
// //         return 1;
// //     }
// //     if(cr == er){
// //         rightways += maze(cr,cc+1,er,ec);
// //     }
// //     if(cc == ec){
// //         downways += maze(cr+1,cc,er,ec);
// //     }
// //     if(cr<er && cc<ec){
// //         rightways += maze(cr,cc+1,er,ec);
// //         downways += maze(cr+1,cc,er,ec);
// //     }
// //     int totalways = rightways + downways;
// //     return totalways;
// // }
// // int main(){
// //     printf("enter no of rows : ");
// //     int m;
// //     scanf("%d",&m);
// //     printf("enter no of coloumns : ");
// //     int n;
// //     scanf("%d",&n);
// //     int totalWays = maze(1,1,m,n);
// //     printf("%d",totalWays);
// // }

// #include<stdio.h>
// int maze(int m,int n){
//     int downways = 0;
//     int rightways = 0;
//     if(m==1 && n == 1){
//         return 1;
//     }
//     if(m == 1){
//         rightways += maze(m,n-1);
//     }
//     if(n == 1){
//         downways += maze(m-1,n);
//     }
//     if(m>1 && n>1){
//         rightways += maze(m,n-1);
//         downways += maze(m-1,n);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main(){
//     printf("enter no of rows : ");
//     int m;
//     scanf("%d",&m);
//     printf("enter no of coloumns : ");
//     int n;
//     scanf("%d",&n);
//     int totalWays = maze(m,n);
//     printf("%d",totalWays);
// }

#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int downWays = 0;
    int rightWays = 0;
    if(cr==er && cc==ec)return 1;
    if(cr==er){
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        downWays += maze(cr+1,cc,er,ec);
        rightWays += maze(cr,cc+1,er,ec);
    }
    int totalways = downWays + rightWays;
    return totalways;
}
int main(){
    int m ;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int p = maze(1,1,m,n);
    printf("%d",p);
}