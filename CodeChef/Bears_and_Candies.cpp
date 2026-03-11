#include <bits/stdc++.h>
using namespace std;
int main() {
	int tc;
	cin >> tc;
	while(tc--){
	    int a, b;
	    cin >> a >> b;
	   int turn = 1;
	   while(true){
	       if(turn%2){
	           if(a<turn){cout << "bob\n"; break;}
	           a-=turn;
	       }else{
	           if(b<turn){cout << "limak\n";break;}
	           b-=turn;
	       }
	        turn++;
	   }
	}
}