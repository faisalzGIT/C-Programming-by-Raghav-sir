#include<stdio.h>

int main(){	
	typedef struct {
		int age;
		float weight;
	} Person;

	Person person1;
	Person* ptr = &person1;
	(*ptr).age = 132;

	printf("%d\n",*ptr);
}








