#include<stdio.h>
#include<string.h>
int main(){
	typedef struct Cricketer{
		char naam[50];
		int age;
		int no_of_test_matches;
		int avg_runs;
	} Cricketer_data;

	Cricketer_data khiladi[20];

	for(int i = 0; i < 2; i++){
		printf("Enter Name:");
		
		//Method 1 to get string input:
		scanf("%[^\n]", khiladi[i].naam); //this will take whole string till the '\n' appears

		//Method 2 to get string input:
		// fgets(khiladi[i].naam, 50, stdin); 
		// khiladi[i].naam[strcspn(khiladi[i].naam,"\n")] = '\0';

		printf("Enter Age:");
		scanf("%d",&khiladi[i].age);
		
		printf("Enter no of test mathches:");
		scanf("%d",&khiladi[i].no_of_test_matches);
		
		printf("Enter average runs:");
		scanf("%d",&khiladi[i].avg_runs);

		getchar(); // To consume the leftover newline character from scanf
	}


	for(int i = 0; i < 2; i++){

		printf("\nKhiladi Numbar %d:\n",i+1);
		printf("The Name is %s",khiladi[i].naam);
		
		printf("\nAge:");
		printf("%d",khiladi[i].age);
		
		printf("\nno of test mathches:");
		printf("%d",khiladi[i].no_of_test_matches);
		
		printf("\naverage runs:");
		printf("%d",khiladi[i].avg_runs);	
	}
	return 0;
}