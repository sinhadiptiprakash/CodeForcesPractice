#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> tree(1002);
void addEdge(int u,int v){
    tree[u].push_back(v);
}
bool countLevel(int n){
    queue<int> q;
    int temp,count=0;
    q.push(1);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        for(auto adjacent:tree[temp]){
            if(tree[adjacent].empty())count++;
            else q.push(adjacent);
        }
        if(count<3)return false;
        else count=0;
        }
    return true;
}
int main(){
    int n,parent;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>parent;
        addEdge(parent,i);
    }
    /*for(int i=1;i<=n;i++){
    cout<<i<<" : ";
        for(auto it:tree[i])cout<<it<<" ";
        cout<<endl;
    }*/
    if(countLevel(n))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}