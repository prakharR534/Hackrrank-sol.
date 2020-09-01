#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        string h = "hackerrank";
        int l=s.length();
        int r=0;

        for(int i=0;i<l;i++){
            if(r < h.length() && i < l && h[r] == s[i])
            r++;
//hackerrank , r points to h and i points on s 
        }

        if(r==h.length())cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
