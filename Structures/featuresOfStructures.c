#include<stdio.h>
int main(){
    typedef struct Pokemon{
        int hp;     // 0-100
        int power;  // 0-100
        char tier;  // S,A,B,C
        int speed;  // 0-100
    } pikachu; 
    pikachu a,b,c;

	a.hp = 120;
	a.power = 12;
	a.speed = 123;
	a.tier = 'a';

	b = a; //THIS IS A DEEP COPY

    printf("%d\n",b.hp);
    return 0;
}

