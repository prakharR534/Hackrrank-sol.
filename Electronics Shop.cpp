#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,b,res=-1;
    cin>>b>>n>>m;

    int k[n],u[m];
    for(int i=0;i<n;i++)cin>>k[i];
    for(int i=0;i<m;i++)cin>>u[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(k[i]+u[j] <= b)
            res = max(res,k[i]+u[j]);
        }
    }

    cout<<res;

    return 0;
}
