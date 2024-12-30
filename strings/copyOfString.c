//Shallow and Deep copy of a String

#include<stdio.h>
int main(){
	//Shallow Copy
	char s1[] = "Physics Wallah";
	char *s2 = s1; // here s2 is a shallow copy of s1
	// lets change s1
	s1[0] = 'M';
	printf("%s", s2); // Output: "Mhysics Wallah"

	//Deep Copy
	char n1[] = {"The New Game"};
	char n2[] = {"The New Game"};
	

	


}