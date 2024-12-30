#include<stdio.h>
#include<string.h>
int main(){
	struct Book {
		char naam[50];
		float salary;
		int age;
	} book1, book2;

	strcpy(book1.naam,"Mohammad faisal");
	book2.age = 12;

	printf("Name of the first Employee: %s \n",book1.naam);

	printf("Age of the second Employee: %d",book2.age);


}
