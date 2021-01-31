#include<bits/stdc++.h>
using namespace std;
struct comp{
    bool operator()(const pair<long long,long long> &a,const pair<long long,long long> &b){
        return a.first>b.first;
    }
};
vector<vector<long long>> graph(100001);
void addEdge(long long u,long long v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void dfs(long long u,vector<bool> &visited){
    visited[u]=true;
    for(auto adjacent:graph[u]){
        if(!visited[adjacent])dfs(adjacent,visited);
    }
}

int main(){
    long long n,m,frnd,u,v;
    cin>>n>>m;
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,comp> cost;
    vector<bool> visited(n+1,false);
    for(long long i=1;i<=n;i++){
        cin>>frnd;
        cost.push({frnd,i});
    }
    for(long long i=0;i<m;i++){
        cin>>u>>v;
        addEdge(u,v);
    }
    long long totalCost=0;
    while(!cost.empty()){
        pair<long long,long long> p=cost.top();
        cost.pop();
        long long v=p.second;
        long long c=p.first;
        if(!visited[v]){
            totalCost+=c;
            dfs(v,visited);
        }
    }
    cout<<totalCost<<endl;
    return 0;
}