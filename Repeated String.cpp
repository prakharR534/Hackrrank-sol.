#include <bits/stdc++.h>

using namespace std;


int main()
{
   string s,st;
   cin>>s;
  long long int n; cin>>n;
  long long int c=0;

   

    for(int i=0;i<s.length();i++){
        if(s[i] == 'a')
        c++;
    }

   long long int ans = (n/s.length())*c;


     for(int i=0;i<n%s.length();i++){
        if(s[i] == 'a')
        ans++;
    }

    cout<<ans<<endl;

    return 0;
}
