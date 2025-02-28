// // wap to print value upto n

// #include<stdio.h>
// void increasing(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1,n);// in this the loop will run till x is equal to n. 
//     return;
// }
// int main(){
//     int n;
//     printf("input number : ");
//     scanf("%d",&n);
//     increasing(1,n) ;
// }

#include<stdio.h>
void increasing(int a,int s){
    if(a==0){
        printf("%d ",s);
        return;
    }
    increasing(a-1,s+a);
    printf("%d ",s);
}
int main(){
    int a = 10;
    increasing(a,0);
}