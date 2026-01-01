// 560.subarray-sum-equals-k
// time complexity: O(n)
// space complexity: O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> presum;
        presum[0] = 1;

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int rem = sum - k;
            if (presum.find(rem) != presum.end()) {
                count += presum[rem];
            }

            presum[sum]++;
        }
        return count;
    }
};
