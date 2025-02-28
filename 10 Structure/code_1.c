#include<stdio.h>
int main(){
    struct pokemon{
        int speed;
        int strength;
        int hp;
        char tier;
    };
    struct pokemon pikachu;// initializing pikachu
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.strength = 60;
    pikachu.tier = 'A';
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.strength);
    printf("%c\n",pikachu.tier);

    struct pokemon charizard;// initialising charizard
    charizard.hp=100;
    charizard.speed=120;
    charizard.strength=80;
    charizard.tier = 'A';
    printf("%d\n",charizard.speed);
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.strength);
    printf("%c\n",charizard.tier);
       
}