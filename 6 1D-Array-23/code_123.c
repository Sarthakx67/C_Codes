// // wap to find the difference between the sum of elements at even indices to the sum of
// // elements at odd indices 

// #include<stdio.h>
// int main(){
//     int n[6] = {1,2,3,4,5,6};
//     int sumEven = 0;
//     int sumOdd = 0;
//     for(int i=1;i<=6;i++){
//         if(i%2==0){
//             sumEven += n[i];
//         }else
//             sumOdd += n[i];
//     }
//     printf("%d",sumEven-sumOdd);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[5] = {1,6,6,6,3};
    int evensum =0;
    int oddsum = 0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            evensum = evensum+arr[i];
        }
        if(i%2!=0){
            oddsum = oddsum + arr[i];
        }
    }
    printf("%d\n",evensum);
    printf("%d\n",oddsum);
    printf("%d",evensum-oddsum);
}