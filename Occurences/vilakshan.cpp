#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxDistance(int arr[], int n) {
        int Indices[n][3]; // 0: Unique_number, 1 : First_Occurence, 2 : Last_Occurence
        int traversedDict = 0;
        for (int i = 0; i < n; i++)
        {
            int numNotPresent = 0;
            for (int j = 0; j < traversedDict; j++) 
            {
                // cout << "loop ran ";
                if (arr[i] == Indices[j][0]) {
                    Indices[j][2] = i;
                    numNotPresent = 1;
                    break;
                }
            }
            if (numNotPresent == 0) {
                Indices[traversedDict][0] = arr[i];
                Indices[traversedDict][1] = i;
                Indices[traversedDict][2] = i;
                traversedDict++;
            }
            // cout << i << " " << Indices[i][2] << " " << Indices[i][1] << " " << Indices[i][2] << endl;
        }
        // cout << "\n\n";
        int diffs[traversedDict];
        int max = 0; // since least diff would be 0 nad diff is abs
        for (int i = 0; i < traversedDict; i++) {
            diffs[i] = Indices[i][2] - Indices[i][1];
            if (diffs[i] > max)
                max = diffs[i];
            // cout << i << " " << Indices[i][0] << " " << Indices[i][1] << " " << Indices[i][2] << " " << diffs[i] << " " << max << endl;
        }
        return max;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.maxDistance (arr, n) << endl;
    }
    return 0;
}


