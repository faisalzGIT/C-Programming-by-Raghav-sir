// Get the size of the string and make its deep copy 
#include<stdio.h>

int main(){
	char s1[] = {"The ffijij9ijnouhiuybhh98hhhouh8ybyh9bhouihIJjutyh7u8jbuii98765"};

	int size = 0;
	int i = 0;
	while(s1[i]!='\0'){
		size++; 
		i++;
	}	
	size++; // To include the Null terminator

	printf("Size of the String is %d\n", size - 1); // size - 1 to exclude null terminator in output


	char s2[size];

	int j = 0;
	while(s1[j]!='\0'){
		s2[j] = s1[j]; 
		j++;
	}

	s2[j] = '\0'; // Ensure the new string is null-terminated
	
	printf("\n");
	puts(s2);
	
	return 0;
}