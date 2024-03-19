//Linear Search
#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int size,int item){
    for(int i=0;i<size;i++){
        if(arr[i]==item){
            cout<<"item is found at index:"<<i<<endl;
            return;
        }
    }
    cout<<"Item is not found!!"<<endl;
}
int main(){
    int item;
    int arr[]={34, 12, 76, 9, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"which Item you want to be search:";
    cin>>item;
   linearSearch(arr,size,item);
    return 0;
}