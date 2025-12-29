// 189.Left rotate an array by one place
// time complexity: O(n)
// space complexity: O(1)
void leftRotateByOne(vector<int>& nums) {
    int n = nums.size();
    int first = nums[0];

    for (int i = 0; i < n - 1; i++) {
        nums[i] = nums[i + 1];
    }

    nums[n - 1] = first;
}

// 189.right rotate an array by k steps
// time complexity: O(n)
// space complexity: O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
    }
};
