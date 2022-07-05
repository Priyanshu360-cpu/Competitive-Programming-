#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[], int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
};
void display(vector<int> graph[]){
 for(int i=0;i<4;i++){
    cout<<"Head of "<<i<<" is ";
     for(int j=0;j<graph[i].size();j++){
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
 }
};
int main(){
    vector<int> graph[5];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);
    addEdge(graph, 3, 4);
    display(graph);
}
