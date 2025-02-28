// wap to find if a number is prime or composite

#include<stdio.h>
int main(){
    int n;
    int a = 0;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
       if(n%i==0){
        a=1;
       }
    }
    if(n==1){printf("print it is neither prime nor composite");}
    else if(a==0){printf("it is a prime number");
    }else printf("it is a composite number");
}