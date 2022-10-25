#include <iostream>
#include <vector>
// #include <string>

using namespace std;

// bool uniqueChars(string str1, string str2) {
//     int flag = 1;
//     for (int i = 0; i < str1.size(); i++) {
//         for (int j = 0; j < str2.size(); j++) {
//             if (str1[i] == str2[j]) {
//                 flag = 0;
//                 break;
//             }
//         } 
//         if (!flag) break;
//     }
//     return flag;
// }

bool uniqueChars(string str) {
    int flag = 1;
    for (int i = 0; i < str.size(); i++) {
        for (int j = i + 1; j < str.size(); j++) {
            if (str[i] == str[j]) {
                flag = 0;
                break;
            }
        } 
        if (!flag) break;
    } 
    return flag;
}

int maxLength(vector<string>& arr) {
    int ans = 0;
    vector<string> resStr;
    string ansStr = "";
    for (int i = 0; i < arr.size(); i++) {
        resStr.push_back(arr[i]);
        for (int j = i + 1; j < arr.size(); j++) {
            resStr[i] += arr[j];
        }
        cout << resStr[i] << endl;
    }
    for (int i = 0; i < resStr.size(); i++) {
        if (uniqueChars(resStr[i]) && resStr[i].size() > ans) { 
            ans = resStr[i].size();
            ansStr = resStr[i];
        }
    }
    cout << ansStr << endl;
    return ans;
}


int main() {
    vector<string> str = {"1", "2", "3", "4", "5"};
    int ans = 0;
    // string str1 = "qwe", str2 = "rty";

    ans = maxLength(str);
    cout << ans << endl;
    // cout << uniqueChars(str1, str2) << endl;
    return 0;
}
