#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> snum = nums;

    sort(snum.begin(), snum.end());
    
    int i = 0, j = nums.size() - 1; 

    while (i < j) {
        if (snum[i] + snum[j] > target) 
            j--;
        else if (snum[i] + snum[j] < target)
            i++;
        else break;
    }
    int k = 0;
    while (snum[i] != nums[k]) k++;
    int l = 0;
    while (snum[j] != nums[l] || l == k) l++;
    snum.clear();
    snum.push_back(k);
    snum.push_back(l);
    return snum;
}

int main() {
    vector<int> num, snum;
    int target = 0, elem = 0;
    char c = ' ';

    while (c != '\n') {
        cin >> elem;
        num.push_back(elem);
        c = getchar();
    }
    cin >> target;

    snum = twoSum(num,target);
    for (int i = 0; i < snum.size(); i++) {
        cout << snum[i] << " ";
    }
    cout << endl;
    
    return 0;
}