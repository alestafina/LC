#include <iostream>
#include <vector>


using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1 = "\0", s2 = "\0";
    bool flag = 1;
    
    for (int i = 0; i < word1.size(); i++)
        s1 += word1[i];
    for (int i = 0; i < word2.size(); i++)
        s2 += word2[i];
    if (s1.size() == s2.size()) {
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] - s2[i] != 0) {
                flag = 0;
                break;
            } 
    } else flag = 0;
    return flag;
}

int main() {
    vector<string> first = {"acd"}, second = {"a", "c", "df"};
    bool ans = 0;
    ans = arrayStringsAreEqual(first, second);
    ans ? (cout << "yes" << endl) : (cout << "no" << endl);
    return 0;
}

