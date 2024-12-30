// TYPEDEF USAGE:
// TYPEDEF USAGE:
// TYPEDEF USAGE:
// TYPEDEF USAGE:
#include<stdio.h>
#include<string.h>
int main(){
	typedef struct Book{
		char naam[50];
		float price;
		int noOfpages;
	} kitab;  // here we dont need to write like 'struct Book variable_name', now we can just type 'kitab variable_name'
	//basically 'struct Book book1' = 'kitab book1' instead of writing long we made it shorter
	
	kitab book1;
	kitab book2;
	kitab book3;

	strcpy(book1.naam,"Stories of the Prophets");
	book1.price = 200.3;
	book1.noOfpages = 212;
	
	strcpy(book2.naam,"DUsri book");
	book2.price = 600.4;
	book2.noOfpages = 542;
	
	strcpy(book3.naam,"teesri book");
	book3.price = 243.7;
	book3.noOfpages = 662;


	printf("Name of the first Employee: %s \n",book1.naam);

	printf("Age of the second Employee: %d",book2.noOfpages);


}
