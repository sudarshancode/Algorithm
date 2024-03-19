//0/1 knapshack

#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int knapshack(vector<int> plist,vector<int> wlist,int knapshack){
    int maxvalue=0;
    int arr[plist.size()][knapshack+1];
    for(int i=0;i<plist.size();i++){
        for(int j=0;j<=knapshack;j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }else{
                if(wlist[i]>j){
                    arr[i][j]=arr[i-1][j];
                }else{
                    arr[i][j]=max(arr[i-1][j],plist[i]+arr[i-1][j-wlist[i]]);
                    if(arr[i][j]>maxvalue){
                        maxvalue=arr[i][j];
                    }
                }
            }
        }
    }
    return maxvalue;
}

int main(){
    vector<int> plist;
    vector<int> wlist;
    int knapshackWeight;
    int item;

    plist.push_back(0);
    wlist.push_back(0);
    cout<<"How many item in the shope:";
    cin>>item;

    for(int i=1;i<=item;i++){
        int profite,weight;
        cout<<"Profite:";
        cin>>profite;
        plist.push_back(profite);
        cout<<"Weight:";
        cin>>weight;
        wlist.push_back(weight);
    }
    cout<<"Enter knapshack weight:";
    cin>>knapshackWeight;

    int m=knapshack(plist,wlist,knapshackWeight);

    cout<<"Maximum profite:"<<m<<endl;
}