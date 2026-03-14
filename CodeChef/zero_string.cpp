#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--){
	    int n;
        string s;
        cin >> n >> s;

        int cnt1 = count(s.begin(), s.end(), '1');
        int cnt0 = n - cnt1;

        cout << min(cnt1, cnt0 + 1) << "\n";
	}
}
