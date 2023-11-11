//Counting Sort Algorithm
#include<iostream>
#define SIZE 8
using namespace std;
int main(){
	int arr[SIZE],max=0,min=0;
	cout<<"Enter array element:";
	for(int i=0;i<SIZE;i++){
		cout<<"arr["<<i<<"]:";
		cin>>arr[i];
	}
	//find maximum and minimum value
	max=arr[0];
	min=arr[0];
	for(int i=1;i<SIZE;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<max<<endl<<min<<endl;
	//create count array
	int size=max+1;
	int count[size];
	for(int i=0;i<size;i++){
		count[i]=0;
	}
	for(int i=0;i<SIZE;i++){
		int value=arr[i];
		count[value]=count[value]+1;
	}
	//create new count_sum array
	int count_sum[size];
	count_sum[0]=count[0];
	for(int i=1;i<size;i++){
	count_sum[i]=count_sum[i-1]+count[i];
	}
	//Create Output new array
	int out[SIZE];
	for(int i=SIZE-1;i>=0;i--){
		int val=arr[i];
		count_sum[val]=count_sum[val]-1;
		int temp=count_sum[val];
		out[temp]=arr[i];
	}
	cout<<"Sorted array:";
	for(int i=0;i<SIZE;i++){
		cout<<out[i]<<" ";
	}
	cout<<endl;
	return 0;
}
