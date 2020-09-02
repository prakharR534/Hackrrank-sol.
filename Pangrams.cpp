#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    //cin>>s;
    //here we have to take a line input 
    //so use getline
    getline(cin, s); 
    int c=0;

    bool a[26]={false};
    transform(s.begin(), s.end(), s.begin(), ::tolower); 

    for(int i=0;i<s.length();i++){
        a[s[i]-'a']=true;
    }

    for(int i=0;i<26;i++){
        if(a[i]==true)
        c++;
    }
    // for(int i=0;i<26;i++){
    //     cout<<a[i]<<" ";
    // }
    //cout<<c;

    if(c==26)cout<<"pangram";
    else
    cout<<"not pangram";

    return 0;
}
