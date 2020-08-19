#include <bits/stdc++.h>

using namespace std;


// Complete the utopianTree function below.
void solve (int n) {
    int h=1;
    for(int i=1;i<=n;i++){
    if(i%2 == 0)
    h++;
    else
    h = 2*h;
    }

    cout<< h<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
            solve(n);
    }

    return 0;
}
