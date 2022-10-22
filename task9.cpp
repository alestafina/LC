#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    int reverse_x = 0, tmp = x, idx = 1;
    bool ans;
    while (tmp > 9) {
        idx *= 10;
        tmp /= 10;
    }

    tmp = x;

    while (tmp > 0) {
        reverse_x +=  idx * (tmp % 10);
        idx /= 10;
        tmp /= 10;
    }
    ans = x == reverse_x ? true : false;
    return ans;
}

int main() {

    int x = 0;
    bool ans;

    cin >> x;
    ans = isPalindrome(x);
    if (ans) cout << "yes\n";
    else cout << "no\n";
    return 0;
}