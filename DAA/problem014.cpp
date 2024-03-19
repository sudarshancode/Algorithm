//Floyd's algorithm
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define INF 9999
void floydAlgorithm(int graph[MAX][MAX],int v){
    int dis[MAX][MAX];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            dis[i][j]=graph[i][j];
        }
    }

    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(dis[i][k]+dis[k][j]<dis[i][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    cout<<"Sortest distance:"<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(dis[i][j]==INF){
                cout<<"INF ";
            }else{
                cout<<dis[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int graph[MAX][MAX];
    int vertices;
    cout<<"Enter number of vertices:";
    cin>>vertices;
    cout<<"Enter graph:"<<endl;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cin>>graph[i][j];
            if(graph[i][j]==0 && i!=j){
                graph[i][j]=INF;
            }
        }
    }
    floydAlgorithm(graph,vertices);
}
/*
0 3 9999 7
8 0 2 9999
5 9999 0 1
2 9999 9999 0
*/