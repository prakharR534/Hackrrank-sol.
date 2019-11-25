#include<cmath>
#include<iostream>
using namespace std;

int main(){
    int n,temp;

    cin>>n;
    while(n--){
        cin >> temp;
        if((temp >= 38 )&& (temp%5 >2))
        temp = temp + 5 - temp%5;
        cout<<temp<<endl;
    }




    return 0;
}
