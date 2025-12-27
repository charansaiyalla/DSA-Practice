// Find the largest element in an array
// time complexity: O(n)
// space complexity: O(1)
class Solution:
public:
    int largestElement(vector<int>& nums) {
        int maxElement = nums[0];
        for (int num : nums) {
            if (num > maxElement) {
                maxElement = num;
            }
        }
        return maxElement;
    }
};