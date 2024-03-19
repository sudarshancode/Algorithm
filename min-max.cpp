#include<bits/stdc++.h>
using namespace std;
void getMaxMin(int arr[],int low,int high,int* min,int *max){
    int mid,min1,min2,max1,max2;

    if(low==high){
        *min=arr[low];
        *max=arr[high];
        return;
    }
    if(high == low+1){
        if(arr[low]<arr[high]){
            *min=arr[low];
            *max=arr[high];
        }else{
            *min=arr[high];
            *max=arr[low];
        }
        return;
    }

    mid=(low+high)/2;
    getMaxMin(arr,low,mid,&min1,&max1);
    getMaxMin(arr,mid+1,high,&min2,&max2);

    if(min1<min2){
        *min=min1;
    }else{
        *min=min2;
    }

    if(max1>max2){
        *max=max1;
    }else{
        *max=max2;
    }
}
int main(){
    int arr[]={1000, 11, 445, 1, 330, 3000};

    int size=sizeof(arr)/sizeof(arr[0]);
    int min,max;
    getMaxMin(arr,0,size-1,&min,&max);

    cout<<min<<"   "<<max;
}