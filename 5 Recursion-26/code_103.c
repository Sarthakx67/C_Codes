// // code to the the power of a number with less time complexity

// #include<stdio.h>
// int powerlog(int a,int b){
//     if(b==1)return a;
//     int x = powerlog(a,b/2);
//     if(b%2==0){
//         int recAns = x * x;
//         return recAns;
//     }
//     else{
//         int recAns = x * x * a;
//         return recAns;
//     }
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     int power = powerlog(a,b);
//     printf("%d",power);
// }

#include<stdio.h>
int powerlog(int a,int b){
    if(b<=1)return a;
    int x = powerlog(a,b/2);
    if(b%2==0){
        int power = x * x;
        return power;
    }
    if(b%2!=0){
        int power = x*x*a;
        return power;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int power = powerlog(a,b);
    printf("%d",power);
}