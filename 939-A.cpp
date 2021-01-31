#include<bits/stdc++.h>
using namespace std;
vector<int> graph(5002);
void addEdge(int u,int v){
    graph[u]=v;
}
bool dfs(int u){
    if(graph[graph[graph[u]]]==u)return true;
    return false;
}
 
int main(){
    int n,child;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>child;
        addEdge(i,child);
    }
    bool ans=false;
    for(int i=1;i<=n;i++){
        if(dfs(i))ans|=true;
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}