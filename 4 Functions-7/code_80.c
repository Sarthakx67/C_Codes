// Function Prototype
// --> used to take use of a function even 
//if it is written anywhere without only wrinting it at the top of the code .

#include<stdio.h>
int main(){
    void fun();
    fun();
    return 0;
}
void fun(){
    printf("Hello World");
}