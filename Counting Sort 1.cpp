#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int t;
   int A[100]={0};
   for(int i=0;i<n;i++){
       cin>>t;
       A[t]++;
   }


    //print
    for(int i=0;i<100;i++){
       cout<<A[i]<<" ";
   }
}
