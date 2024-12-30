// WAP to rotate the given matrix without using another matrix
#include<stdio.h>
void main(){
	int n = 3;
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
				int temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	// Rotate 

	for(int i=0; i<n; i++){
		int j=0;
		int k= n-1;
		while (j<k){
			int temp = arr[i][j];
			arr[i][j]=arr[i][k];
			arr[i][k]=temp;
			j++;
			k--;
		}
	}
printf("\n");
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ",arr[i][j]);
			}
		printf("\n");
	}

}