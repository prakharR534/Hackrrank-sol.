#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int N = n,c=0;


        while(n>0){
            int d = n%10;
            if(d != 0 ){
                if(N % d == 0)
            c++;
            }
            n /=10;
            
        }
        cout<<c<<endl;

    }

    return 0;
}
