#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int t;
    cin>>t;

    while(t--){
       long long int n;
        cin>>n;
        long long int modulo = pow(10, 9) + 7;
        
        cout<< (long long int)powl((n % modulo) ,2%modulo) % modulo<<endl;
    }
    return 0;
}
