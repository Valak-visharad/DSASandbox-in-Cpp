#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target && j != i)
                    return vector <int> {i, j};
            }
        }
        return vector <int> {0, 0};
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
    for (auto x : solution)
        cout << x;
    return 0;
}