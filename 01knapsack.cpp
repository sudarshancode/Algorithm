//0/1 Knapsack problem in c++
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> wlist, vector<int> plist,int knapsackWeight){
    int arr[wlist.size()][knapsackWeight+1];
    int maxValue=0;
    for(int i=0;i<wlist.size();i++){
        for(int j=0;j<=knapsackWeight;j++){
            if(i==0){
                arr[i][j]=0;
            }else{
                if(wlist[i]>j){
                    arr[i][j]=arr[i-1][j];
                }else{
                    arr[i][j]=max(arr[i-1][j],plist[i]+arr[i-1][j-wlist[i]]);
                    if(arr[i][j]>maxValue){
                        maxValue=arr[i][j];
                    }
                }
            }
        }
    }
    return maxValue;
}

int main(){
    int item,weight=0,profit=0,knapsackWeight;
    vector<int> wlist;
    wlist.push_back(0);
    vector<int> plist;
    plist.push_back(0);
    cout<<"How many items in the shop:";
    cin>>item;
    cout<<"Enter weight and profit of each item:\n";
    for(int i=1;i<=item;i++){
        cout<<"Weight["<<i<<"]:";
        cin>>weight;
        wlist.push_back(weight);
        cout<<"Profit["<<i<<"]:";
        cin>>profit;
        plist.push_back(profit);
    }
    cout<<"Now Enter your Knapshak Weight:";
    cin>>knapsackWeight;

    int x= maxProfit(wlist,plist,knapsackWeight);
    cout<<x<<endl;
    
    return 0;
}