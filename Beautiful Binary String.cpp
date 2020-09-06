#include <bits/stdc++.h>

using namespace std;



int main()
{
   int n;cin>>n;
   string s;
   cin>>s;
   int l = s.length(),count=0;

   for(int i=0;i<n;){
       if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
           count++;i+=3;
       }
       else i++;
       
   }
   // if(count)
    cout<<count<<endl;
   // else
    //cout<<0<<endl;

    return 0;
}
