#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    unordered_map<char,int> mpp;
	    for(int i=0; i<n; i++){
	        mpp[s[i]]++;
	    }
	    bool check = true;
	    for(auto it : mpp){
	        if(it.second % 2 != 0){
	            check = false;
	            break;
	        }
	    }
	    cout << (check ? "yes\n" : "no\n");
	}
}
