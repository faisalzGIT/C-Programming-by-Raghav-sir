// Reverse the string
#include<stdio.h>
int main(){
	char str[40];
	gets(str);
	int n = 0;
	int size= 0;
	
	while(str[n]!='\0'){
		n++;
		size++;
	}
	printf("%d",size);
	puts(str);

	for(int i=0, j=size-1; i<=j; i++,j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	puts(str);
}