#include<iostream>
using namespace std;

int main(){
    int n,k,t =0;

    cin>>n;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>k;

            if ( i == j)
            t = t+k;

            if( i == n-j-1)
            t = t-k;

        }
    }

    cout<<abs(t);
    return 0;

}
