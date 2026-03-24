#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int tc;
cin >> tc;
while(tc--){
    int n;
    string a;
    string b;
    cin >> n >> a >> b;
    if( count(a.begin(), a.end(), '1') ==  count(b.begin(), b.end(), '1') )
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
}
return 0;
}
