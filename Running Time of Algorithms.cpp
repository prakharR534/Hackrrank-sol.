#include <bits/stdc++.h>
using namespace std;


// Complete the runningTime function below.
int runningTime(vector<int> arr) {
    int s=0;
    int l = arr.size();
    for(int i=1;i<l;i++){
        int v = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j]  > v){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = v;
        s += i - (j+1);
    }

    return s;


}

int main()
{   int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    cin>>arr[i];
    

    int result = runningTime(arr);

    cout << result << "\n";

    return 0;
}

