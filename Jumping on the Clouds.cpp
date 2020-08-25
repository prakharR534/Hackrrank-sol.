#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,step=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];


    for(int i=0;i<n-1;){
        if(A[i+2] == 1){
            i++;
            step++;
        }
        // else if(A[i+1] == 1){
        //     i +=2;
        //     step++;
        // }
        else {
            i +=2;
            step++;
        }

    }

    cout<<step;
}
