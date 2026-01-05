// 34. Find First and Last Position of Element in Sorted Array
// time complexity: O(log n)
// space complexity: O(1)
class Solution {
    int first_occurance(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        int first=-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return first;
    }
     int last_occurance(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        int last=-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occurance(nums,target);
        if(first==-1){
            return {-1,-1};
        }
        int last=last_occurance(nums,target);
        return {first,last};
    }
};