#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,d;
    cin>>n>>d;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];

    for(int i=d;i<n;i++)
    cout<<A[i]<<" ";

    for(int i=0;i<d;i++)
    cout<<A[i]<<" ";

}
