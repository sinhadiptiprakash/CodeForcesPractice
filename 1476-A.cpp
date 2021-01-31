#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t-->0){
        cin>>n>>k;
        if(n==k)cout<<1<<endl;
        else if(n==1)cout<<k<<endl;
        else if(k==1)cout<<1<<endl;
        else if(n>k){
            if(n%k==0)cout<<1<<endl;
            else{
                int temp=n/k;
                k=(temp+1)*k;
                cout<<(k/n)+1<<endl;
            }
        }
        else if(n<k){
            if(k%n==0)cout<<k/n<<endl;
            else cout<<(k/n)+1<<endl;
        }
    }
    return 0;
}