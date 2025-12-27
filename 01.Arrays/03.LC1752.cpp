//1752. Check if Array Is Sorted and Rotated
// time complexity: O(n)
// space complexity: O(1)

bool check(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]<=nums[i+1]){

        }else{
            count++;
        }
    }
     if(nums[numsSize - 1] > nums[0]) {
        count++;
    }
    return count<=1;
}