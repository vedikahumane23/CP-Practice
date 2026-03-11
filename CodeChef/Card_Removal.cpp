#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--){
	    int n;
	    cin >> n;
	    int a[n];
	    
	    unordered_map<int,int>mpp;
	    int freq=0;
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        mpp[a[i]]++;
	    }
	    for(int i=0; i<n; i++){
	        if(mpp[a[i]]>freq)
	        freq = mpp[a[i]];
	    }
	    cout << n-freq << endl;
	}
}
