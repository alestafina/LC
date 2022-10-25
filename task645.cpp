#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        cout << i << " " << nums[i] << " " << nums[i + 1] << endl;
        if (nums[i] != i + 1) {
            if (i > 0 && nums[i] ==  nums[i - 1]) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i - 1] + 1);
                nums[i] = nums[i - 1] + 1;
                break;
            } else if (nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i + 1] - 1);
                nums[i] = nums[i + 1] - 1;
                break;
            }
        }
    }
    if (nums.back() == nums[nums.size() - 2]) {
        ans.push_back(nums.back());
        ans.push_back(nums.back() + 1);
    }
    if (nums.front() == nums[1]) {
        ans.push_back(nums.front());
        ans.push_back(nums.front() - 1);
    }
    // for (; l < nums.size() / 2; l++, r--) {
    //     if (nums[l] + nums[r] < nums.size() + 1) {
    //         ans.push_back(nums[r]);
    //         ans.push_back(nums[r - 1] + 1);
    //         break;
    //     } else if (nums[l] + nums[r] > nums.size() + 1) {
    //         cout << l << " " << r << endl;
    //         ans.push_back(nums[l]);
    //         ans.push_back(nums[l + 1] - 1);
    //         break;
    //     }
    // }
    // if (l == r) {
    //     cout << "jjj" << endl;
    //     if (nums[l] * 2 > nums[l + 1] + nums[r - 1]) {
    //         ans.push_back(nums[l]);
    //         ans.push_back(nums[l + 1] - 1);
    //     } else if (nums[l] * 2 < nums[l + 1] + nums[r - 1]) {
    //         ans.push_back(nums[r]);
    //         ans.push_back(nums[r - 1] + 1);
    //     } 
    // }
    return ans;
}

int main() {
    vector<int> nums = {3,2,3,4,6,5}, ans;
    // qsort(nums.begin(), nums.end());
    ans = findErrorNums(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}