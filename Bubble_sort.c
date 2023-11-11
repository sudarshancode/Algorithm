//Bubble sort
#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE]={7,3,5,2,9};

	int i,j;
	for(i=0;i<SIZE-1;i++){
		for(j=i+1;j<SIZE;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
