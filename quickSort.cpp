//Quick Sort Algorithm
#include<iostream>
using namespace std;
int partision(int arr[],int l,int h){
	int prev=arr[l];
	int i=l;
	int j=h;

	while(i<=j){
		while(prev>=arr[i]){
			i++;
		}
		while(prev<arr[j]){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	if(j<i){
		swap(arr[l],arr[j]);
	}
	return j;
}
void quickSort(int arr[],int l,int h){
	if(l<h){
		int t=partision(arr,l,h);
		quickSort(arr,l,t-1);
		quickSort(arr,t+1,h);
	}
}
int main(){
	int arr[10]={6,3,5,1,8,10,9,13,12,14};
	quickSort(arr,0,9);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
	return 0;
}
