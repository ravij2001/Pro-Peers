#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;


// solution with time complexity o(n^2) and space complexity : o(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
       for(int i = 0; i < n ; i++){
            int num = nums[i];
            int count = 0;
            for(int j = 0; j < n ; j++){
                if(nums[j] == num){
                    count++;
                }
            }
            if(count == 1){
                return num;
            }
       }
         return -1;
        
    }
};


// solution with time complexity o(n) and space complexity : o(1)

// using xor method
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xoor = 0;
       for(int i = 0; i < n ; i++){
            xoor = xoor ^ nums[i];
       }
         return xoor;
    }
};


