// 2896. Apply Operations to Make Two Strings Equal
#include<iostream>
using namespace std;


class Solution {
public:
    int minOperations(string s1, string s2, int x) {
        int diff = 0;
        int n = s1.size();
        int prevIndex = 0, accounted = 0;
        int cost = 0;

        cout << "inside the function\n";

        for (int i = 0; i < n; i++)
        {
            diff += abs(s1[i] - s2[i]);
            cout << "(s1[i] != s2[i])" << s1[i] << "\t" << s2[i] << "\t" << (s1[i] != s2[i]) << endl;
            if (s1[i] != s2[i])
            {
                if (accounted)
                {
                    prevIndex = i;
                    accounted = 0;
                }
                else
                {
                    cost += (i - prevIndex == 1 ? 1 : x);
                    accounted = 1;
                }
            }
        }
        cout << "after the for loop";

        diff = diff % 2;
        if (diff) // diff is odd
            return -1;

        return cost; // if diff is even
    }
};



int main()
{
    Solution s;
    string s1 = "1100011000";
    string s2 = "0101001010";
    int x = 2;
    // cout << "code runs";
    int cost = s.minOperations(s1, s2, x);
    cout << "\n\n\n\ncost = " << cost << "\n\n\n\n";
    return 0;
}