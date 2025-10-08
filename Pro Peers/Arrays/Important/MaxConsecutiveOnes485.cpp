#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

// optimal approach with time complexity : 0[n] and space complexity : 0[1]

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            if(nums[i] == 1){
                 count = count + 1;
                 maxi = max(count,maxi); 
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};