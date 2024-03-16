//Write a program to print all the nodes reachable from a given starting node in
//a graph using BFS method

#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int node,edge;
void bfsTravers(int startingNode){
    for(int i=0;i<node;i++){
        color[i]=WHITE;
    }
    queue<int> q;
    q.push(startingNode);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        color[x]=GRAY;
        for(int i=0;i<node;i++){
            if(adj[x][i]==1){
                if(color[i]==WHITE){
                    q.push(i);
                }
            }
        }
        color[x]=BLACK;
        cout<<x<<"  ";
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
    int startingNode;
    cout<<"Enter Starting Node:";
    cin>>startingNode;
    bfsTravers(startingNode);

    return 0;
}