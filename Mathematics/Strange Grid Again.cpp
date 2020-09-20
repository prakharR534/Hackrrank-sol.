#include <bits/stdc++.h>

using namespace std;


int main()
{
   long long int r,c,res=0;
   cin>>r>>c;

if(r%2 ==0){

    res = (r/2-1)*10 + 1;
    res += 2*(c-1);
}
else{
    res = (r/2)*10 ;
    res += 2*(c-1);
}


cout<<res<<endl;
}
