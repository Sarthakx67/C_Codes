// Array of Structures

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char Name[15];
    }pokemon;
    pokemon charizard;
    charizard.attack = 90;
    pokemon arr[3];// array of pokemon data type;
    // pokemon 1
    arr[0].attack = 10;
    arr[0].hp = 20;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].Name,"MewTwo");
    // pokemon 2
    arr[1].attack = 1000;
    arr[1].hp = 1000;
    arr[1].speed = 1000;
    arr[1].tier = 'G';
    strcpy(arr[1].Name,"Arceus");
    // pokemon 3
    arr[2].attack = 70;
    arr[2].hp = 80;
    arr[2].speed = 90;
    arr[2].tier = 'C';
    strcpy(arr[2].Name,"pikachu");
    for(int i=0;i<3;i++){
        printf("Name of Pokemon : %s\n",arr[i].Name);
        printf("Pokemon %d has Attack of : %d\n",i+1,arr->attack);
        printf("Pokemon %d has HP of : %d\n",i+1,arr->hp);
        printf("Pokemon %d has Speed of : %d\n",i+1,arr->speed);
        printf("Pokemon %d Tier is : %c\n",i+1,arr->tier);
    }
}