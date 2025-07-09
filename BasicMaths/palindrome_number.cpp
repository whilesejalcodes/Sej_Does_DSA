// Problem : https://leetcode.com/problems/palindrome-number/description/
// Description : Given an integer x, return true if x is a palindrome, and false otherwise.
class Solution {
public:
    bool isPalindrome(int x) {
        int og_num=x, rev_num=0, last_digit=0;
        while (x>0){
            last_digit=x%10;
            x=x/10;
            if (rev_num>INT_MAX/10 || rev_num<INT_MIN/10)
            return 0;
            rev_num=rev_num*10 + (last_digit);
        }
        if (rev_num==og_num) return true;
        else return false;
        
    }
};

//or 


class Solution {
public:
    bool isPalindrome(int x) {
        long long og_num=x, rev_num=0, last_digit=0;
        while (x>0){
            last_digit=x%10;
            x=x/10;
            rev_num=rev_num*10 + (last_digit);
        }
        if (rev_num==og_num) return true;
        else return false;
        
    }
};
