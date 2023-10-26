// https://leetcode.com/problems/construct-product-matrix/
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>> &grid)
    {
        int n = grid[0].size();
        int m = grid.size();
        // cout << n << m;

        vector<vector<int>> p(n, vector<int>(m, 1));

        // // cout << "p =>\n{";
        // for (int i = 0; i < n; i++)
        // {
        //     // cout << "{ ";
        //     for (int j = 0; j < m; j++)
        //     {
        //         // cout << p[i][j] << " ";
        //     }
        //     // cout << " }\n";
        // }
        // // cout << "\n}";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << "p[" << i << "][" << j << "] = " << p[i][j] << endl;
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < m; l++)
                    {
                        if (i != k || j != l)
                        {
                            p[i][j] *= grid[k][l];
                        }
                    }
                }
                // cout << "p[" << i << "][" << j << "] = " << p[i][j] << endl;
            }
        }


        // // cout << "p =>\n{";
        // for (int i = 0; i < n; i++)
        // {
        //     // cout << "{ ";
        //     for (int j = 0; j < m; j++)
        //     {
        //         // cout << p[i][j] << " ";
        //     }
        //     // cout << " }\n";
        // }
        // // cout << "\n}";


        return p;
    }
};


int main()
{
    Solution sol;

    vector<vector<int>> grid = {{1, 2}, {3, 4}};
    sol.constructProductMatrix(grid);

    return 0;
}