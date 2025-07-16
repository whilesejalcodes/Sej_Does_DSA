// Problem : https://www.geeksforgeeks.org/problems/print-gfg-n-times/1
// Description : Print GFG n times without the loop.
class Solution {
  public:
    void printGfg(int N, int count=0) {
        // Code here
        if (count==N) return;
        
        cout<<"GFG ";
        printGfg(N,count+1);
    }
};

//OR

class Solution {
  public:
    int count=0;
    void printGfg(int N) {
        // Code here
        if (count==N) return;
        cout<<"GFG ";
        count++;
        printGfg(N);
    }
};
