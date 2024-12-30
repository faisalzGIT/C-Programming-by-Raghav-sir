#include<stdio.h>
 
int main(){
    struct Pokemon{
        int hp;     // 0-100
        int power;  // 0-100
        char tier;  // S,A,B,C
        int speed;  // 0-100
    } pikachu; //direct variable declaration after User defined data-type creation

    // struct Pokemon pikachu;
    pikachu.hp = 60;
    pikachu.power = 90;
    pikachu.speed = 89;
    pikachu.tier = 'A';

    printf("%d\n",pikachu.hp);

    struct Pokemon charizard;
    charizard.hp = 90;
    charizard.power = 95;
    charizard.speed = 90;
    // charizard.tier = 'S';
    printf("Enter Tier of Charizard:");
    scanf("%c", &charizard.tier);


    printf("Tier of Charizard:%c",charizard.tier);
    
    return 0;
}