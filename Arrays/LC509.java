// 509. Fibonacci Number
// time complexity: O(n)
// space complexity: O(n)

class Solution {
    int fibb(int a, int b, int n) {
        if (n == 0) {
            return a;
        }
        if (n == 1) {
            return b;
        }
       return fibb(b, a + b, n - 1);
    }
     int fib(int n){
      return fibb(0,1,n);
    }
}