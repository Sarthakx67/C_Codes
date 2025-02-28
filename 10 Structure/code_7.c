#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricket{
        char Name[15];
        int Age;
        int NoOfTestMatches;
        int AvgRuns;
    }Crickter;
    Crickter arr[20];
    arr[0].Age = 20;
    arr[0].AvgRuns = 50;
    arr[0].NoOfTestMatches = 40;
    strcpy(arr[0].Name,"arun");
    arr[1].Age = 25;
    arr[1].AvgRuns = 60;
    arr[1].NoOfTestMatches = 50;
    strcpy(arr[0].Name,"varun");
    arr[2].Age = 30;
    arr[2].AvgRuns = 90;
    arr[2].NoOfTestMatches = 100;
    strcpy(arr[2].Name,"tarun");
    for(int i=0;i<3;i++){
        printf("name : %s\n",arr[i].Name);
        printf("Age : %d\n",arr[i].Age);
        printf("AvgRuns : %d\n",arr[i].AvgRuns);
        printf("No Of TestMatches : %d\n",arr[i].NoOfTestMatches);
    }
}
