//Selection sort 
 #include<stdio.h>
 #include<stdbool.h>
 #include<limits.h>


int main(){
	int arr[]={7,4,5,9,8,2,1};
	int n = 7;

	for(int i = 0; i<n; i++){
		printf("%d ",arr[i]);
	}

	printf("\n");

	for (int i = 0; i < n-1; i++) {
		int min = INT_MAX;
		int minidx = -1;
		for (int j = i; j < n; j++) {
			if(min > arr[j]){
				min = arr[j];                 
				minidx = j;
			} 

			//swap
			int temp = arr[minidx];
			arr[minidx] = arr[i];
			arr[i]=temp;   
		}
		arr[i]=min;

		
	}
	


	for(int i = 0; i<n; i++){
		printf("%d ",arr[i]);
	}
}

