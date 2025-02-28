// code to find out if area of rectangle is greater than perimeter or if 
// perimeter of rectangle is greater than area of rectangle

#include<stdio.h>
int main(){
    int l,b;
    printf("length of the rectangle : ");
    scanf("%d",&l);
    printf("breadth of the rectangle : ");
    scanf("%d",&b);
    int a = b*l;
    int perimeter = (2*l+2*b);
    if(a>perimeter){
        printf("area of rectangle is greater than perimeter");
    }else{printf("perimeter of rectangle is greater than area of rectangle");}
}