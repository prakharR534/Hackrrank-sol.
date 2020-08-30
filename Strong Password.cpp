#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;cin>>n;
    string s;
    cin>>s;

    int co=0;
    bool a[4]={false};

    for(int i=0;i<s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z') a[2]=true;
        else if(s[i] >= 'a' && s[i] <= 'z') a[1]=true;
        else if(s[i] >= '0' && s[i] <= '9') a[0]=true;
        else a[3]=true;
    }

    for(int i=0;i<4;i++){
        if(a[i]==false)
        co++;
    }

        cout<<max(co,6-n);
    return 0;
}
