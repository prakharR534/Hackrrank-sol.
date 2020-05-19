#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
int solve(int x) {

    int exp2 = 0;
    while(x % 2 ==0){
        exp2++;
        x = x/ 2;
    }

    int exp5 = 0;
    while(x % 5 ==0){
        exp5++;
        x = x/5;
    }

    int b = max(exp2 -2, exp5);
    int a= 1;

    int rem = 1%x;

    while(rem != 0){
        a++;
        rem = (rem*10 +1) % x;
    }

    return 2*a + b;






}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int x;
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = solve(x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
