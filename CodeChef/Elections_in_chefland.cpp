#include <bits/stdc++.h>
using namespace std;

int main() {
int tc;
cin >> tc;
while(tc--){
    int x,y,z;
    cin >> x >> y >> z;
    cout <<(x>50 ? "A" : (y>50 ? "B": (z>50?"C":"Nota"))) << endl;
}
}
