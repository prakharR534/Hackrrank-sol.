#include <bits/stdc++.h>

using namespace std;


int main()
{   
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    // if(x1<x2){
    //     if(v1>v2){
    //         cout<<"YES\n";
    //     }
    //     else cout<<"NO\n";
    // }
    //  if(x1>x2){
    //     if(v1<v2){
    //         cout<<"YES\n";
    //     }
    //     else cout<<"NO\n";
    // }


    if(v2>=v1) cout<<"NO\n";
    else if((x2-x1) % (v2-v1) == 0)
    //rate
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

