#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,sum=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];

    int d,m;
    cin >> d >> m;

    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j=0;j<m;j++)
        {
            sum += A[i+j]; // from i to i+m
        }
        if(d == sum)
        count++;

    }
    cout<<count<<endl;

}
      
