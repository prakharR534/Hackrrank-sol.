#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,s=5,sum=0;
    cin>>n;

    for(int i=0;i<n;i++){
        sum = sum + floor(s/2);
        s= floor(s/2)*3;
    }
    cout<<sum<<endl;
    return 0;
}
