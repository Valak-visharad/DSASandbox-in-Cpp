// 2896. Apply Operations to Make Two Strings Equal

class Solution {
public:
    int minOperations(string s1, string s2, int x) {
        int s1_one = 0, s2_one = 0;
        int n = sizeof(s1);
        int prevIndex = 0, accounted = 0;
        int cost = 0;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
                s1_one++;
            if (s2[i] == '1')
                s2_one++;
            
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
        if (s1_one == s2_one)
            return cost;

        cout << s1_one << s2_one; // DEBUG CODE

        return -1;
    }
};



int main()
{
    Solution s;
    s.minOperations()
}