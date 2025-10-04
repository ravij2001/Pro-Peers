#include <iostream>
#include <vector> 
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int, int> mpp;

        // Count frequency of each number
        for (int i : nums) {
            mpp[i]++;
        }

        vector<vector<int>> ans;

        // Convert map entries to [num, frequency] pairs
        for (auto it : mpp) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};
