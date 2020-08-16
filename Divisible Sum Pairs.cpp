#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,c;
    cin>>n>>k;

    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((A[i]+A[j]) % k == 0)
            c++;
        }
    }

    cout<<c<<endl;

}
