#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, int> RomanToInt = {{'M', 1000}, {'D', 500},
                                   {'C', 100},{'L', 50}, 
                                   {'X', 10}, {'V', 5},  {'I', 1}};
    string s = "MCMXCIV";
    int tmp = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int n = RomanToInt[s[i]];
        if (n < tmp) {
            ans += tmp;
            tmp = n;
        } else if (n > tmp) {
            if (tmp == 0) {
                tmp = n;
            } else {
                ans += n - tmp;
                tmp = 0;
            }
        } else if (tmp == n) {
            ans += tmp + n;
            tmp = 0;
        }
    }
    ans += tmp;
    cout << ans << endl;
    return 0;
}
