#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int begin, int end){
    if (begin >= end) return;
    swap(arr[begin], arr[end]);
    reverseArray(arr, begin + 1, end - 1);
}
int main() {
    int n;
    cout << "please enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);
    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


//or
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int left=0;
        int right=arr.size()-1;
        
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
};

//or
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        auto left=arr.begin();
        auto right=arr.end()-1;
        
        while(left<right){
            swap(*left,*right);
            left++;
            right--;
        }
        
    }
};
