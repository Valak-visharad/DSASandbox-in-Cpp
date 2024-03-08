#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] == target)
                break;
            else if (nums[left] + nums[right] < target)
                left++;
            else if (nums[left] + nums[right] > target)
                right--;
        }
        return vector <int> {left, right};
    }
};  

//leetcode
int main() {
    int n, target;
    cout << "n : ";
    cin >> n;
    cout << "Target : ";
    cin >> target;
    int arr[n];
    cout << "Array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector <int> nums(arr, arr + n);
    Solution sol;
    vector<int> solution = sol.twoSum(nums, target);
    cout << "[" << solution[0] << ", " << solution[1] << "]";
    return 0;
}