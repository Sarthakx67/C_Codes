// program to find out the amount of profit or loss has been done

#include<stdio.h>
int main(){
    int a,b;
    printf("Selling Price of Item : ");
    scanf("%d",&a);
    printf("Cost of The Item : ");
    scanf("%d",&b);
    if(a>b){
        int c=a-b;
        printf("profit of :%d",c);
    }
    else if(a==b){
        printf("No Profit no Loss");
    }
    else{
        int d=b-a;
        printf("loss of :%d",d);
    }
   
}