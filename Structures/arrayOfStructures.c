// Array of Structures
#include<stdio.h>
#include<string.h>
int main(){
	typedef struct pokemon{
		char nam[15]; 
		int hp;     // 0-100
        char tier;  // S,A,B,C
        int speed;  // 0-100
	} Pokemon;

	Pokemon pokemons[3];

	strcpy(pokemons[0].nam, "Pikachu");
	pokemons[0].hp = 100;
	pokemons[0].tier = 'B';
	pokemons[0].speed = 80;

	strcpy(pokemons[1].nam, "Charizard");
	pokemons[1].hp = 100;
	pokemons[1].tier = 'A';
	pokemons[1].speed = 70;
	
	strcpy(pokemons[2].nam, "MEWTWO");
	pokemons[2].hp = 10000;
	pokemons[2].tier = 'S';
	pokemons[2].speed = 1000;

	for (int i = 0; i < 3; i++){
		printf("\n\n");
		printf("%s\n",pokemons[i].nam);
		printf("HP:%d\n",pokemons[i].hp);
		printf("TIER:%c\n",pokemons[i].tier);
		printf("SPEED:%d\n",pokemons[i].speed);
	}	
}
