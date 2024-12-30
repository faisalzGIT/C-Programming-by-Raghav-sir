#include<stdio.h>
int main(){
	int x=2, y=3;
	// int* a = &x,b = &y; //this means int* a, int b.. this is error Maker

	// printf("%p\n",a);
	// printf("%p\n",b);

	//to solve this we can use typedef
	typedef int* ptr;
	ptr p1 = &x;
	printf("%p\n",p1);
	printf("%p\n",&x);
	
}

