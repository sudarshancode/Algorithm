//DFS in a graph
#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define BLACK 2
#define GRAY 3
int adj[100][100];
int color[100];
int node,edge;
void dfsVisit(int x){
    color[x]=GRAY;
    for(int i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[x]==WHITE){
                dfsVisit(i);
            }
        }
    }
    color[x]=BLACK;
    cout<<x<<" is visited vertex"<<endl;
}
void dfs(){
    for(int i=0;i<node;i++){
        color[i]=WHITE;
    }
    for(int i=0;i<node;i++){
        if(color[i]==WHITE){
            dfsVisit(i);
        }
    }
}
int main(){
    cout<<"Enter number of node and edge:";
    cin>>node>>edge;
    int n1,n2;
    cout<<"Enter the graph:"<<endl;
    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
    return 0;
}