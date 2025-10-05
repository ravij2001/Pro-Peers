#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int pref = 1,suf = 1;
         int ans = INT_MIN;
         int n = nums.size();
        for(int i = 0; i < nums.size();i++){
               if(pref == 0) pref = 1;
               if( suf == 0) suf = 1;
                pref = pref * nums[i];
                suf = suf * nums[n - i - 1];
                ans = max(ans,max(pref,suf));
            }
        return ans;
    }
};