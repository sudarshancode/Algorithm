//Bubble sort
#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE]={7,3,5,2,9};

	int i,j;
	for(i=0;i<SIZE-1;i++){
		for(j=0;j<SIZE-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
