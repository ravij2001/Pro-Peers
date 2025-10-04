#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(), count = 0;

        for (int i = 0; i < n; i++) {
            int prod = 1;
            for (int j = i; j < n; j++) {
                prod *= nums[j];
                if (prod < k) count++;
                else break; // stop early, product will only increase
            }
        }
        return count;
    }
};
