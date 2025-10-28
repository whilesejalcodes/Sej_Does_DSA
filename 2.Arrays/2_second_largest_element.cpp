//Problem: https://www.geeksforgeeks.org/problems/second-largest3735/1
//Description: Given an array of positive integers arr[], return the second largest element from the array without sorting. If the second largest element doesn't exist then return -1.
//Note: The second largest element should not be equal to the largest element.
//my first try
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=-1;
        int secondLargest=-1;
        for (int i=0;i<arr.size();i++){
            if (arr[i]>largest) largest=arr[i];
        }
        
        for (int f=0;f<arr.size();f++){
            if (arr[f]>secondLargest && arr[f]<largest){
                secondLargest=arr[f];
            }
        }
        return secondLargest;
    }
};
