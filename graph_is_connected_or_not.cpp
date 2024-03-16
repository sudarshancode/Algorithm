//Write a program to check whether a given graph is connected or not using DFS method
#include<bits/stdc++.h>
using namespace std;

#define BLACK 3
#define WHITE 1
#define GRAY 2


int adj[100][100];
int color[100];
int node,edge,check=1;
void dfsVisit(int x){
    color[x]=GRAY;
    for(int i=0;i<node;i++){
        if( adj[x][i]==1){
            if(color[i]== WHITE){
                dfsVisit(i);
            }
        }
    }
    color[x]=BLACK;
}
void dfs(){
    int vertex;
    for(int i=0;i<node;i++){
        color[i] = WHITE;
    }
    cout<<"Enter source vertex:";
    cin>>vertex;
    dfsVisit(vertex);
    //all vertex check 
    for(int i=0;i<node;i++){
        if( color[i] == WHITE ){
            check=0;
            break;
        }
    }

    if(check==0){
        cout<<"Graph is not connected"<<endl;
    }else{
        cout<<"Graph is connected";
    }
}
int main(){
    cout<<"Enter number of node and edge:";
    cin>>node>>edge;

    int n1,n2;
    cout<<"Enter graph:";
    
    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
    return 0;
}