#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;cin>>t;
    while(t--){
      long long  int n,tr,r=1;
        cin>>n;
        for(int i=0;i<n-1;i++){
            cin>>tr;
            r *= tr;
           r=  r % 1234567;
        }

        cout<<r<<endl;
    }
}
