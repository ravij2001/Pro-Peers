#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthSmallest(vector<int>& nums, int k) {
        // Min-heap
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i < nums.size(); i++) {
            minHeap.push(nums[i]);
        }

        // Remove first k-1 elements
        for (int i = 1; i < k; i++) {
            minHeap.pop();
        }

        // Now the top is the kth smallest
        return minHeap.top();
    }
};
