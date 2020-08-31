#include <bits/stdc++.h>

using namespace std;



int main()
{ int c=0;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i+=3){
        if(s[i] != 'S')c++;
         if(s[i+1] != 'O')c++;
         if(s[i+2] != 'S')c++;
    }

    cout<<c;
    return 0;
}
