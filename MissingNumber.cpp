class Solution {
    public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), i;
        sort(nums.begin(), nums.end());
        for(i = 0; i < n - 1; i++)
        {
            if(nums[i] + 1 != nums[i + 1])
                return (nums[i] + 1);
        }
        return (nums[0] != 0 ? 0 : nums[i] + 1);
    }
};
