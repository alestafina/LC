#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> number  = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,}, buf;
    buf = number;
    if (number.back() == 9) {
        int i = number.size() - 1;
        while (i >= 0 && number[i] == 9) {
            buf[i] = 0;
            if (i > 0 && number[i - 1] != 9) {
                buf[i - 1]++;
                break;
            }
            if (i == 0 && number[i] == 9) {
                buf.insert(buf.begin(), 1);
            }
            i--;
        }
    } else {
        buf.back()++;
    }
    for (int i = 0; i < (int)buf.size(); i++) {
        cout << buf[i];
    }
    cout << endl;
    return 0;
}    
