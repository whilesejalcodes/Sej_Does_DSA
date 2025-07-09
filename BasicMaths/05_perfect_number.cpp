// Problem : https://leetcode.com/problems/perfect-number/description/
// Description : A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
//Given an integer n, return true if n is a perfect number, otherwise return false.
// Constraints: 1 <= num <= 10^8
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for (int i=1; i<=num/2;i++){ // yahaan we do not give num==1 return false, cause i<=1/2 ie i<=0 hona chaahiye, but i=1 is not less than or equal to 0 and hence loop ki ek bhi iteration nahi hoti 
            if (num%i==0) sum=sum+i;
        }
        if (sum==num) return true;
        else return false;
    }
};

// or (better approach)
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num==1) return false; // cause 1 is not a perfect number and sum we have taken is 1, so wo end me sum = num aa jaaega
        int sum=1;
        for (int i=2; i<=sqrt(num);i++){
            if (num%i==0) {
                sum=sum+i;
                if ((num/i)!=i){
                    sum=sum+(num/i);
                }
            }
        }
        if (sum==num) return true;
        else return false;
    }
};
