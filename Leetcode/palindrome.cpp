#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int revHalf = 0;

        while (x > revHalf) {
            revHalf = revHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == revHalf || x == revHalf / 10);
    }
};

int main() {
    Solution obj;
    int x;
    cin >> x;
    cout << (obj.isPalindrome(x) ? "true" : "false");
    return 0;
}