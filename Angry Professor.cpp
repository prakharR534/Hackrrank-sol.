#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;cin>>t;
    while(t--){
    int n,k,c=0;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];

     for(int i=0;i<n;i++){
         if(A[i]<=0)
         c++;
     }

     if(c >= k) cout<<"NO\n";
     else cout<<"YES\n";
}

}
