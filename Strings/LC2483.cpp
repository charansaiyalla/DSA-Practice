//2483. Minimum Penalty for a Shop
// time complexity: O(n)
// space complexity: O(1)
class Solution {
public:
    int bestClosingTime(string cust) {
       int i,ans,penalty,min,y;
       for(i=0;i<cust.size();i++){
        if(cust[i]=='Y')
            y++;
       }
       penalty=y;
       min=penalty;
       ans=0;
       for(i=0;i<cust.size();i++){
        if(cust[i]=='Y')
            penalty--;
        else
            penalty++;
        if(penalty<min){
            min=penalty;
            ans=i+1;
        }
       }
       return ans;
    }
};