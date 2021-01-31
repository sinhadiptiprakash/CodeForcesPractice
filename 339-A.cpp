#include<iostream>
#include<string>
#include<vector>
#include<bitset>
#include<algorithm>
using namespace std;
int main(){
    string s,s2;
    cin>>s;
    s2=s;
    sort(s.begin(),s.end(),greater<int>());
    int i=s.size()-1;
    int j=0;
    while(i<s2.size()){
        s2[i]=s[j++];
        i=i-2;
        //j=j+1;
    }
    cout<<s2;
    return 0;
}