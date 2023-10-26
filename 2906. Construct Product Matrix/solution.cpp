// https://leetcode.com/problems/construct-product-matrix/
#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int m = grid.size();

        cout << n << m;

        return grid;
    }
};



int main()
{
    Solution sol;

    sol.constructProductMatrix({{1, 2}, {3, 4}});

    return 0;
}