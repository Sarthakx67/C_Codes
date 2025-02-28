#include<stdio.h>
int main(){
    struct book{
        char name[15];
        int price;
        int NoOfPages;
    }a,b,c;
    a.NoOfPages = 10;
    a.price = 123;
    strcpy(a.name,"Atomic Habits");

    printf("%s\n",a.name);
    printf("%d\n",a.price);
    printf("%d\n",a.NoOfPages);

    b.NoOfPages = 354;
    b.price = 230;
    strcpy(b.name,"48LawsOfPower");
    printf("%s\n",b.name);
    printf("%d\n",b.price);
    printf("%d",b.NoOfPages);
}