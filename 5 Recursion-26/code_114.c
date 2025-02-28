// towwr of hanoi full game 

#include<stdio.h>
int power(int a,int n){
    if(n==0)return 1;
    int pow = a*power(a,n-1);
    return pow;
}
void tower(int n,char s,char h,char d){
    if(n==0)return;
    tower(n-1,s,d,h);
    printf("%c --> %c\n",s,d);
    tower(n-1,h,s,d);   
    return;
}
int main(){
    int n;
    printf("input the no of disks : ");
    scanf("%d",&n);
    printf("Minimum Moves = %d\n",power(2,n)-1); 

    tower(n,'A','B','C');
    return 0;
}