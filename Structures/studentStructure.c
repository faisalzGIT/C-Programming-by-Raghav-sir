#include<stdio.h>
#include<string.h>

int main(){	
	struct Student{
		char name[100];
		int roln;
		float perc;
		int marks;
		char grade;
	};

	struct Student student1;
	strcpy(student1.name, "Mohammad Faisal"); //string assignment
	student1.roln = 21;
	student1.perc = 43.32;
	student1.marks = 37;
	student1.grade = 'C';
	printf("%s", student1.name);
}








