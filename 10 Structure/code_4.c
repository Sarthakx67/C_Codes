#include<stdio.h>
int main(){
    typedef struct marks{
        int maths;
        int physics;
        int chemistry;
        int biology;
    }siuu;
    siuu a;
    siuu b;
    siuu c;
    siuu d;
    a.maths = 100;  
    a.chemistry = 70;
    a.physics = 50;
    a.biology = 60;
    b.maths = 100;
    b.chemistry = 70;
    b.physics = 50;
    b.biology = 60;
    d.biology = 80;
    printf("%d\n",a.physics);
    printf("%d\n",a.maths);
    printf("%d\n",a.biology);
    printf("%d\n",a.chemistry);
    printf("%d\n",b.physics);
    printf("%d\n",b.maths);
    printf("%d\n",b.biology);
    printf("%d\n",b.chemistry);
    printf("%d\n",b.biology);
}