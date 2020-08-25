#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(5,0);
    
    int tmp;
    while ( n --> 0 ) {
    cin >> tmp;
        ++vec[tmp-1];
    }
    
    tmp = 0;
    for (int i = 1; i < 5; ++i) {
        if (vec[i] > vec[tmp])
            tmp = i;
    }
    
    cout << tmp+1 << '\n';
    
    return 0;
}


   
