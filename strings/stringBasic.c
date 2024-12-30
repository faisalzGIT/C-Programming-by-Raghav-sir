#include<stdio.h>
int main(){
	char c = '5';
	printf("%c\n",c);

	int x = (int)c;
	printf("%d\n",x);

	int arr[]={'H','E','L','L','O','O','\0'};//In this the \0 is not Placed automatically by Compiler
	int i = 0;
	while(arr[i]!='\0'){
		printf("%c",arr[i]);
		i++;
	} // Output: HELLOO

	printf("\n");

	char brr[] = {"hello"}; // In this the \0 is Placed automatically by the Compiler
	int j = 0;
	while(brr[j]!='\0'){
		printf("%c",brr[j]);
		j++;
	}  // Output: hello
	

	return 0;
}