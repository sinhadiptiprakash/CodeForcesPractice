#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,count=0,dif1,dif2;
    cin>>n;
    string curent,next;
    cin>>curent;
    cin>>next;
    for(int i=0;i<n;i++){
        if(stoi(curent.substr(i,1))>5)dif1=10-stoi(curent.substr(i,1));
        else if(stoi(curent.substr(i,1))<5)dif1=stoi(curent.substr(i,1))-0;
        else dif1=stoi(curent.substr(i,1));
        if(stoi(next.substr(i,1))>5)dif2=10-stoi(next.substr(i,1));
        else if(stoi(next.substr(i,1))<5)dif2=stoi(next.substr(i,1))-0;
        else dif2=stoi(next.substr(i,1));
        count+=min(abs(stoi(next.substr(i,1))-stoi(curent.substr(i,1))),(dif1+dif2));
    }
    cout<<count<<endl;
    return 0;
}