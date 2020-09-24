#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;

        int d1 = abs(x-a);
        int d2 = abs(x-b);
        

        
        if(d1>d2) cout<<"Cat B\n";
        
        else if(d2>d1) cout<<"Cat A\n";
        else cout<<"Mouse C\n";
    }
   
}
