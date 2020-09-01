#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */

int main()
{    int n;
    cin >> n;
    int p;
    cin >> p;

    if(p==1 || p==n)
    cout<<"0";

    else{
        int front = p/2 ;
        int back = n/2 - p/2  ;

        cout<<min(front,back)<<endl;
    }



    
    return 0;
}
