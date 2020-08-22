#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,l=0,v=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i] == 'U'){
            l++;
            if(l ==0)
            v++;
        }
        else if (s[i] == 'D')
         l--;
    }

    cout<<v<<endl;
    // cout<<d<<endl;
    // cout<<(u-d)<<endl;

    return 0;
}
