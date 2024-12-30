#include<stdio.h>
#include<string.h>

int main(){
	char *str = "College";
	int x = strlen(str);  
	printf("%d",x); // Output is 7 because '\0' is not considered

	char s1[12] = {"naam is Khan"};
	char s2[12];
	strcpy(s2,s1); // here the s1 is copied in s2
	printf("\n%s",s2);
	



}