#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = nums.size();
        // for (int i = 0; i < k; i++)
        int i = 0;
        while (i < k)
        {
        //    cout << i << nums [i] << endl;
            if (nums[i] == nums[i + 1]) {
                for (int j = i + 1; j < k; j++)
                {
                    nums[j] = nums[j + 1];
                }
                k--;
            }
            else
                i++;
        }
        return k;
    }
};




int main()
{
    Solution a;
    //vector<int>nums = {1, 2, 2, 3};
    vector<int>nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = a.removeDuplicates(nums);
    for (int i = 0; i < k; i++)
        cout << nums[i] << ", ";
    cout << "\nk = " << k;
    
    return 0;
}