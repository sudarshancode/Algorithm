#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int arr[100];
	int size,i,item,j,k;
	printf("How many want to size the list:");
	scanf("%d",&size);
	printf("Enter array element (non decresing order):");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
/*
	for(j=0;j<size;j++){
		for(k=j+1;k<size;k++){
			if(arr[j]>arr[k]){
				int swap=arr[j];
				arr[j]=arr[k];
				arr[k]=swap;
			}
		}
	}
	printf("Sorted (non decresing) array is:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
*/
	printf("\n");
	printf("Enter item which you want to search:");
	scanf("%d",&item);

	int left=0;
	int right=size-1;
	

	while(left<=right){
		int middle=(left+right)/2;

		if(arr[middle]==item){
			printf("Item is found at index:%d\n",middle);
			break;
		}else if(item<arr[middle]){
			right=middle-1;
		}else if(item>arr[middle]){
			left=middle+1;
		}else{
			printf("Item is not found\n");
			break;
		}
	}
	return 0;
}
