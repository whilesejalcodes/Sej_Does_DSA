// Problem : https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
// Description : Given an integer n, calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till n-th term.
// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n,int i=1) {
        // code here
        if (i>n) return 0;
        return (i*i*i) + sumOfSeries(n,i+1);
    }
};
