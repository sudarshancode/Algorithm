//Selection Sort Algorithm
#include<iostream>
using namespace std;
#define SIZE 5
int main(){
    int arr[SIZE];
    int min;
    cout<<"Enter element of array:";
    for(int i=0;i<SIZE;i++){
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=0;i<SIZE;i++){
        min=i;
        for(int j=i+1;j<SIZE;j++){
            if(arr[j]<arr[min]){ //If value of j index is smaller than value of min index, min index shall be j index
                min=j;
            }
        }
        int swap=arr[min];
        arr[min]=arr[i];
        arr[i]=swap;
    }
    cout<<"Sorted Array:";
    for(int i=0;i<SIZE;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
