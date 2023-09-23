// https://leetcode.com/problems/shifting-letters/ : 848
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        long long int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += shifts[i];
        for (int i = 0; i < n; i++) {
            arr[i] = int(s[i]) + sum;
            sum -= shifts[i];
            arr[i] = (arr[i] - 97) % 26 + 97;
        }
        string update = string(1, char(arr[0])); // Initialize the update string with the first character
        for (int i = 1; i < n; i++)
            update += char(arr[i]); // Append characters to the update string
        return update;
    }
};

