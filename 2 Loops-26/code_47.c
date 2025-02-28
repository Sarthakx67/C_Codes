//  print the factorial of the given numbers
 
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }printf("%d\n",fact);
//     }

#include<stdio.h>
int main(){
    int a = 5;
    int fact = 1;
    for(int i=1;i<=5;i++){
        fact = fact * i;
    }
    printf("%d",fact);
}