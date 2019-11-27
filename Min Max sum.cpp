#include<iostream>
using namespace std;

int main(){
    long long a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    long long int tot =0,max=0,min= 10000000;

 for (int i = 0; i < 5; ++i) {
        tot += a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout<<tot-max<<" "<<tot-min;
}
