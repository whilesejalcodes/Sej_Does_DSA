// Problem : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
// Description : You are given a 3-digit number n, Find whether it is an Armstrong number or not.
//An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int og_num=n; int sum=0; int last_digit;
        if (n>100 && n<1000){
            while (n>0){
                last_digit=n%10;
                sum = sum+(last_digit*last_digit*last_digit);
                n=n/10;
            }
        }
        if (og_num==sum) return true;
        else return false;
    }
};
