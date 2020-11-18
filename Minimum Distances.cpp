#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int m=0,mi=100000;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(A[j]==A[i]){
            m = abs(j-i);
               mi = min(m,mi);
        }
     
    }
    }
    
    if(mi==100000)
    mi=-1;
    
    cout<<mi<<endl;
    
}
