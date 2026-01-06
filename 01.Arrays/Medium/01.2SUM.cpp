// 1. 2 SUM
// time complexity: O(n)
// space complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> map;
        for(int i=0;i<nums.size();i++){
            int more=target-nums[i];
            if(map.find(more)!=map.end()){
                return {map[more],i};
            }
            else{
                map[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};