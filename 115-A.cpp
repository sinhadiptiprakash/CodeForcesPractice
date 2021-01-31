#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tree(2001);
void addEdge(int u,int v){
    tree[v].push_back(u);
}
int countLevel(int u,vector<bool> &visited){
    queue<int> q;
    int temp,count=0;
    q.push(u);
    q.push(-1);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp==-1){
            if(!q.empty())q.push(-1);
            count++;
        }
        else{
            visited[temp]=true;
            for(int it:tree[temp]){
                if(!visited[it])q.push(it);
            }
        }  
    }
    return count;
}
int main(){
    int n,manager;
    cin>>n;
    vector<int> alone;
    for(int i=1;i<=n;i++){
        cin>>manager;
        if(manager!=-1)addEdge(i,manager);
        else alone.push_back(i);
    }
    vector<bool> visited(n+1,false);
    int count=0;
    for(int i:alone){
        if(!tree[i].empty()){
            int curentCount=(countLevel(i,visited));
            count=max(count,curentCount);
        }
    }
    if(count<1)count=1;
    cout<<count<<endl;
    return 0;
}