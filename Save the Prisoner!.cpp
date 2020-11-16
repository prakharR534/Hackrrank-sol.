#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,s,ans;
        cin>>n>>m>>s;
        
        ans=(n+s+m-1)%n;
        if(!ans)
        ans=n;
        
        cout<<ans<<endl;
    }
}
