#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }

       int max=scores[0];
    int min = scores[0];
    int mincount=0,maxcount=0;

    for(int i=0;i<n;i++){
        if(scores[i] > max){
            max = scores[i];
            maxcount++;
    }

    if(scores[i] < min){
        min = scores[i];
        mincount++;
    }

   

}
 cout<<maxcount<<" "<<mincount<<endl;

}
