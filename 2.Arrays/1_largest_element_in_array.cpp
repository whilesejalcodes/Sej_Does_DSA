//Problem: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
//Description: Given an array arr[]. The task is to find the largest element and return it.
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=arr[0];
        for (int i=0;i<arr.size();i++){
            if (arr[i]>max) max=arr[i];
        }
        return max;
    }
};
