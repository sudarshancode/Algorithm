//DFS in a graph
#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define BLACK 2
#define GRAY 3
int adj[100][100];
int color[100];
int node,edge;

void bfs(int startingNode){
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
        cout<<x<<"is visited vertex"<<endl;
    }
    
}
int main(){
    int st;
    cout<<"Enter number of node and edge:";
    cin>>node>>edge;
    int n1,n2;
    cout<<"Enter the graph:"<<endl;
    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
    }
    cout<<"Enter Starting Node:";
    cin>>st;
    bfs(st);
    return 0;
}