// 125. Valid Palindrome
// time complexity: O(n)
// space complexity: O(1)
class Solution {
    boolean ispalin(String s,int i,int n){
        if(i>n){
            return true;
        }else if(s.charAt(i)!=s.charAt(n)){
            return false;
        }
        return ispalin(s,i+1,n-1);
    }
    public boolean isPalindrome(String s) {
        s=s.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
        return ispalin(s,0,s.length()-1);
    }
}