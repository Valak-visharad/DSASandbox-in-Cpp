#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        int left = 0;
        int right = sortedNums.size() - 1;
        while (left < right) {
            if (sortedNums[left] + sortedNums[right] == target)
                break;
            else if (sortedNums[left] + sortedNums[right] < target)
                left++;
            else if (sortedNums[left] + sortedNums[right] > target)
                right--;
        }
        bool leftNotFound = true, rightNotFound = true;
        int newLeft = -1, newRight = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (leftNotFound && nums[i] == sortedNums[left]) {
                newLeft = i;
                leftNotFound = false;
            }
            else if (rightNotFound && nums[i] == sortedNums[right]) {
                newRight = i;
                if (newRight != newLeft)
                    rightNotFound = false;
            }
        }
        return vector <int> {newLeft, newRight};
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