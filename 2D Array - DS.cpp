#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
int sum = -1000;

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        int top = arr[i][j]+arr[i][j+1]+arr[i][j+2];
        
        int middle =arr[i+1][j+1];
        int bottom = arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];

        if(top + middle + bottom > sum)
        sum = top + middle + bottom;
    }
}

return sum;

}

int main()
{
    
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

       
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    return 0;
}
