// // wap to print  sum of all odd digit of a integer

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int lastdigit ;
//     int sum = 0 ;
//     while(n!=0){
//         lastdigit = n%10;
//         if(lastdigit%2!=0){
//             sum = sum +lastdigit;
//         }
//         n=n/10;
//     }printf("%d",sum);
// }

// // wap to print  sum of all odd digit of a integer

#include<stdio.h>
int main(){
    int a = 1285;
    int b = a;
    int oddsum = 0;
    int evensum = 0;
    while(b!=0){
    int lastdigit = b%10;
    if(lastdigit%2!=0){
        oddsum = oddsum + lastdigit;
    }
    else{
        evensum += lastdigit;
    }
    b=b/10;
    }
    printf("odd digits sum : %d\n",oddsum);
    printf("Even digits sum : %d",evensum);

}