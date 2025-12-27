// 1838. Frequency of the Most Frequent Element
// time complexity: O(n log n)  
// space complexity: O(1)
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    long long sum=0;
    int ans=1,l=0;
    int n=nums.size();
    for(int r=0;r<n;r++){
        sum+=nums[r];
        while((long long)nums[r]*(r-l+1)-sum>k){
            sum-=nums[l];
            l++;
        }
        ans=max(ans,(r-l+1));
    }
    return ans;
    }
};