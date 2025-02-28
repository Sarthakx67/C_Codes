// print table of any input number
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int table=i*n;
        printf("\n%d",table);
    }
}