// Problem : https://www.geeksforgeeks.org/problems/count-digits5716/1
// Description: Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int og_num=n, count=0;
        while (n>0){
            int last_digit=n%10;
            if (last_digit!=0 && og_num%(n%10)==0) count++;
            n=n/10;
        }
    return count;
    }
};
