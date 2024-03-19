//insertion sort
#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int value;
    for(int i=1;i<size;i++){
        int hole=i;
        value=arr[hole];
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
}
int main()
{
    int arr[]={34, 12, 76, 9, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}