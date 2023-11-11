//Insertion Sort Algorithm
#include<iostream>
#define SIZE 5
using namespace std;
int main()
{
    int arr[SIZE];
    int value,hole;
    cout<<"Enter element of this array:";
    for(int i=0;i<SIZE;i++){
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=1;i<SIZE;i++){
        value=arr[i];
        hole=i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
    cout<<"Sorted Array:";
    for(int i=0;i<SIZE;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}
