#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        int c=0;
        cin>>s;

        int l = s.length();
        for(int i=0;i<l;i++){
            if(s[i] == s[i+1])
            c++;
        }

        cout<<c<<endl;
    }
}
