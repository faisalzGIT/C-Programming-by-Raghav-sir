#include<stdio.h>
int main(){
    typedef struct Pokemon{
        int hp;     // 0-100
        int power;  // 0-100
        char tier;  // S,A,B,C
        int speed;  // 0-100
    } Pokemon;

	typedef struct A_class_pokemon{
		Pokemon normals;  // first structure nested inside second structure
		char ability[100];
	} A_class_pokemon;

	A_class_pokemon pikachu;
	strcpy(pikachu.ability,"Bijli kadki");
	pikachu.normals.hp = 100;
	pikachu.normals.power = 110;
	pikachu.normals.speed = 233;
	pikachu.normals.tier = 'A';

	typedef struct S_class_pokemon{
		A_class_pokemon A_class_ki_properties;  // second structure nested inside third structure
		char special_attack[100];
	} S_class_pokemon;

	S_class_pokemon mewtwo;
	strcpy(mewtwo.special_attack,"somethingg");
	strcpy(	mewtwo.A_class_ki_properties.ability,"once more somethingg");
	mewtwo.A_class_ki_properties.normals.hp = 10;
	mewtwo.A_class_ki_properties.normals.power = 10;
	mewtwo.A_class_ki_properties.normals.speed = 100;
	mewtwo.A_class_ki_properties.normals.tier = 'S';
    return 0;
}

