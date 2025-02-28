// given a matrix "a" of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).return 
// the sum of the rectangle from (l1,r1) to (l2,r2) .

// #include<stdio.h>
// int main(){
//     int m = 4;
//     int n = 5;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nInput the given number : ");
//     printf("\nInput the first cordinate : ");
//     int gc1r = scanf("%d",&gc1r);
//     printf("\nInput the second cordinate : ");
//     int gc1c = scanf("%d",&gc1c);
//     printf("\nInput the third cordinate : ");
//     int gc2r = scanf("%d",&gc2r);
//     printf("\nInput the fourth cordinate : ");
//     int gc2c = scanf("%d",&gc2c);
//     int sum =0;
//     for(int i=gc1r;i<=gc2r;i++){
//         for(int j=gc1c;j<=gc2c;j++){
//             sum += arr[i][j];
//         }
//     }
//     for(int i=gc1r;i<=gc2r;i++){
//         for(int j=gc1c;j<=gc2c;j++){
//         printf("%d",sum);
//         }
//     }
// }

// given a matrix "a" of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).return 
// the sum of the rectangle from (l1,r1) to (l2,r2) .



#include<stdio.h>
int main(){
    int r;
    printf("row : ");
    scanf("%d",&r);
    int c;
    printf("coloumn : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l1;
    int r1;
    printf("row/coloumn : ");
    scanf("%d",&l1);
    scanf("%d",&r1);
    int l2;
    int r2;
    printf("row/coloumn : ");
    scanf("%d",&l2);
    scanf("%d",&r2);
    int sum = 0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);
}