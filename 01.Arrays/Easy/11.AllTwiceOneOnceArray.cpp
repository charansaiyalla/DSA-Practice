// 136. Single Number
// time complexity: O(n)
// space complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
            cout<<xorr<<endl;
        }
        return xorr;
    }
};