#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,t;
    cin>>n>>t;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    while(t--){
        int l,r;
        cin>>l>>r;

        //min in (l,r)
        int min=A[l];
        for(int i=l;i<=r;i++){
            if( A[i] <= min ){
                    min = A[i];
            }
                        
        }

        cout<<min<<endl;
    }
   
    return 0;
}

