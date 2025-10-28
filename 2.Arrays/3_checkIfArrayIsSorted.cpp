//Problem:https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
//Description:Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

//Earlier i had written a very horrendous code (oops!!!)
// for (int i=0; i<n-1; i++){
//     if (arr[i] <= arr[i+1])
//         return true;   // ❌ returns true just after checking first pair
//     else {
//         return false;
//         break;         // ❌ unreachable (break after return never runs)
//     }
// }
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        for (int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]) return false;
        }
        return true;
    }
};
