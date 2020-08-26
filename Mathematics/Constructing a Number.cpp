#include <bits/stdc++.h>
using namespace std;

int getsum(int t){
    int sum=0;
    while(t>0){
    
        sum += t % 10;
        t /= 10;
    }
    return sum;
}

int main()
{
   int t;cin>>t;
   while(t--){
       int n,sum=0;
       cin>>n;
       int t;
       for(int i=0;i<n;i++){
           cin>>t;
           sum += getsum(t);
       }

       if(sum%3 == 0)cout<<"Yes\n";
       else cout<<"No\n";
       
       
         }

    return 0;
}

