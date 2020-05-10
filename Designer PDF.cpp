#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    vector<int> h(26);
    string str;
    for(int i=0;i<26;i++){
        cin>>h[i];
    }
    cin>>str;
    int maxh = 0;
    for(int i=0;i<str.size();i++){
        maxh = max(maxh, h[str[i] - 'a']);
    }
    cout << str.size() * maxh <<endl;
}
