#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        // long long res;
        // if (n % 2) {
        //     res = ((n / 2)+1)* (n-1);
        // } else {
        //     res = (n / 2) * n;
        // }
        cout << 2*(n/2)*((n+1)/2) << endl;
    }
}