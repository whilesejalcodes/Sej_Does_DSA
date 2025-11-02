//Problem : https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
//Description : Given an integer num, return the number of digits in num that divide num.
//An integer val divides nums if nums % val == 0.

class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int og_num=num;
        while (num>0){
            int val=num%10;
            if (og_num%val==0 && val!=0) count++;
            num=num/10;
        }
        return count;
        
    }
};
