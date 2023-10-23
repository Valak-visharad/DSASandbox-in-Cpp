class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxx = 0;

        cout << "height[left] LEFT HEIGHT[right] RIGHT \n";
        while (left < right) {
            int curr = min(height[left], height[right]) * (right - left);
            maxx = max(maxx, curr);
            height[left] < height[right] ? left++ : right--;
            cout << height[left] << " " << left << " " << height[right] << " " << right << endl;
        }

        return maxx;
    }
};



