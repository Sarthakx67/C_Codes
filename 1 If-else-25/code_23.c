///given 3 points on a line with their x,y co-ordinates find if they lie on a same line or not

#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Input Value of x1 : ");
    scanf("%d",&x1);
    printf("Input Value of y1 : ");
    scanf("%d",&y1);
    printf("Input Value of x2 : ");
    scanf("%d",&x2);
    printf("Input Value of y2 : ");
    scanf("%d",&y2);
    printf("Input Value of x3 : ");
    scanf("%d",&x3);
    printf("Input Value of y3 : ");
    scanf("%d",&y3);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("all three points lie on a straight line");
    }else{printf("all 3 points does not lie on a same line");}
}