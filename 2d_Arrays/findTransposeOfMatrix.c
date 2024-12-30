// WAP to print the transpose of a matrix entered by the user.
#include <stdio.h>
int main()
{
	int r, c;

	printf("Enter number of rows:");
	scanf("%d", &r);
	printf("Enter number of columns:");
	scanf("%d", &c);

	int arr[r][c];
	printf("Enter Elements in the Matrix:");
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n");

	int brr[c][r];	
	for (int i = 0; i < c; i++){
		for (int j = 0; j < r; j++){
			brr[j][i] = arr[j][i];
			printf("%d ", brr[j][i]);
		}
		printf("\n");
	}

	return 0;
}