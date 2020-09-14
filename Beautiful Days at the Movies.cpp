#include <bits/stdc++.h>

using namespace std;

int rev(int i){
    int rem=0,rev=0;

    while(i){
        rem = i % 10;
        rev = rev*10 + rem;
        
        i /= 10;
    }
    return rev;
}

int main()
{
    int s,e,k,c=0;
    cin>>s>>e>>k;

    for(int i=s;i<e+1;i++){
        if(abs(i - rev(i)) % k == 0 )
        c++;
    }

    cout<<c;


    return 0;
}
   
