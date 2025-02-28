#include<stdio.h>
typedef int Number;

Number power(int a,int b){
    Number pow = 1;
    for(Number i=1;i<=b;i++){
        pow *= a;
    }
    return pow;
}
Number main(){
    Number a;
    scanf("%d",&a);
    Number b;
    scanf("%d",&b);
    Number c = power(a,b);
    printf("%d",c);
    typedef struct start{
    Number hello;
    Number wello;
    Number cello;
    }hehe;
    
    hehe r;
    r.hello = 10;
    printf("%d",r.hello);    
    
    
}