//Sequential Search
#include<stdio.h>
int seqSearch(int arr[],int size,int k){
	int i;
	for(int i=0;i<size;i++){
		if(arr[i]==k){
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={34,23,10,32,19};
	int size=sizeof(arr)/sizeof(arr[0]);
	int target;
	printf("Enter your target:");
	scanf("%d",&target);
	int item_index=seqSearch(arr,size,target);
	
	if(item_index==-1){
		printf("Item is not found\n");
	}else{
		printf("Item is found at index %d\n",item_index+1);
	}

	return 0;
}
