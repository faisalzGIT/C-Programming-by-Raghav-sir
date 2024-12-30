#include<stdio.h>
int main(){
    typedef struct {
        int hp;     // 0-100
        int power;  // 0-100
        char tier;  // S,A,B,C
        int speed;  // 0-100
    } Pokemon;

    Pokemon pikachu;
    Pokemon* ptr = &pikachu;
    printf("%p",ptr);

	pikachu.hp = 120;
	pikachu.power = 12;
	pikachu.speed = 123;
	pikachu.tier = 'a';

    return 0;
}
