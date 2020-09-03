#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        int l = s.length();

        for(int i=0,j=l-1;i<l/2,j>l/2-1;i++,j--){
            c+=abs(s[i]-s[j]);
        }


    cout<<c<<endl;

    }

    return 0;
}
