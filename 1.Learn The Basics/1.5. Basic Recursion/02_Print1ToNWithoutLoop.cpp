// Problem : https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1
// Description : You are given an integer n. You have  to print all numbers from 1 to n.
//Note: You must use recursion only, and print all numbers from 1 to n in a single line, separated by spaces.
class Solution {
  public:
    void printNos(int n,int i=1) {
        // Code here
        if (i>n) return;
        cout<<i<<" ";
        printNos(n,i+1);
    }
};
