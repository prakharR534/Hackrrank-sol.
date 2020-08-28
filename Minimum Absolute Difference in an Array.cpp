#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,mx=100000000000000;
   cin>>n;
   int c[n];
   for(int i=0;i<n;i++)
   cin>>c[i];

   sort(c,c+n);

   for(int i=0;i<n-1;i++){
      if(c[i+1]-c[i] < mx)
      mx = c[i+1]-c[i];
   }
   cout<<mx;
}
//

